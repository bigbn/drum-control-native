// Your First C++ Program

#include <iostream>
#include <libexadrums/Api/eXaDrums.hpp>
#include <thread>

// using namespace eXaDrumsApi;
using namespace std;

void loop_thread(eXaDrumsApi::eXaDrums &drumKit) { 
    std::cout << "thread loop"; 
} 

int main() {
    std::cout << "Starting...";
    try {
        eXaDrumsApi::eXaDrums drumKit{"/home/bigbn/data"};
        
        drumKit.Start([&](int _instrumentId, float _rawVolume) {
            printf("INST: %d \t VOL:%g\n", _instrumentId, _rawVolume);
        });

        thread func_thread(loop_thread, ref(drumKit));
        if (func_thread.joinable()) func_thread.join(); 
        loop_thread(drumKit);
    } catch (const std::exception& e) { 
        std::cout << "Unable to start";    
    }
    

    std::cout << "Started";
    while(true) { }
    return 0;
}
