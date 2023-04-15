#include <iostream>
#include "cylinder.h"
#include "cylinder.cpp" // Don't include it in future. Should run with just headers.

int main(){
    Cylinder cylinder1(20, 10);
    std::cout << "volume: " << cylinder1.volume() << std::endl;

    return 0;
}