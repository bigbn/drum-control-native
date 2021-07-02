// Your First C++ Program

#include <iostream>
#include <libexadrums/Api/eXaDrums.hpp>
#include <thread>
#include <execinfo.h>

// using namespace eXaDrumsApi;
using namespace std;

int main() {
    std::cout << "Starting...\n";
    eXaDrumsApi::eXaDrums drumKit{"/etc/drums-data"};
    
    std::cout << "Constructed...\n";
    drumKit.Start();
          
    std::cout << "Started\n";
    
    while(true) {}
    return 0;
}
