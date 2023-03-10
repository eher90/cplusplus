#include <iostream>

int main(){
    int value1{10};
    int value2{-300};

    std::cout << "value 1: " << value1 << std::endl;
    std::cout << "value 2: " << value2 << std::endl;

    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2): " << sizeof(value1) << std::endl;

    unsigned int value3{4};
    // unsigned int value4{-5}; // Error due to having a signed int

    return 0;
}