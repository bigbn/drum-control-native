// Your First C++ Program

#include <iostream>
#include <libexadrums/Api/eXaDrums.hpp>
#include <thread>
#include <execinfo.h>

// using namespace eXaDrumsApi;
using namespace std;

int main() {
    std::cout << "Starting...\n";
    eXaDrumsApi::eXaDrums drumKit{"/home/bigbn/data"};
    
    std::cout << "Constructed...\n";
    drumKit.Start([&](int _instrumentId, float _rawVolume) {
        printf("INST: %d \t VOL:%g\n", _instrumentId, _rawVolume);
    });
   
   
    std::cout << "Started\n";
    //while(true) { }
    return 0;
}
