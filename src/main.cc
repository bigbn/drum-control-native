// Your First C++ Program

#include <iostream>
#include <libexadrums/Api/eXaDrums.hpp>

using namespace eXaDrumsApi;

int main() {
    std::cout << "Starting!";
    eXaDrumsApi::eXaDrums drumKit{"/root/.eXaDrums/Data/"};
    return 0;
}
