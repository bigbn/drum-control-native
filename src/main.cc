// Your First C++ Program

#include <iostream>
#include <libexadrums/Api/eXaDrums.hpp>

// using namespace eXaDrumsApi;

int main() {
    std::cout << "Starting...";
    try {
        eXaDrumsApi::eXaDrums drumKit{"/home/bigbn/data"};
        drumKit.Start([&](int _instrumentId, float _rawVolume) {
        printf("INST: %d \t VOL:%g\n", _instrumentId, _rawVolume);
        });
    } catch (const std::exception& e) { 
        std::cout << "Unable to start";    
    }
    

    std::cout << "Started";
    while(true) { }
    return 0;
}
