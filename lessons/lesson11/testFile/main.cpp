#include <iostream>
#include "compare.h" // Preprocessor

int main(){

    int maximum = max(34, 56);
    std::cout << "max: " << maximum << std::endl;

    int minimum = min(20, 40);
    std::cout << "min: " << minimum << std::endl;

    return 0;
}