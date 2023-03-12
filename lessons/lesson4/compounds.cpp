#include <iostream>

int main(){

    int value = 45;

    std::cout << "Value: " << value << std::endl;

    std::cout << std::endl;
    value += 5;
    std::cout << "Value after += 5: " << value << std::endl;
    
    std::cout << std::endl;
    value -= 5;
    std::cout << "Value after -= 5: " << value << std::endl;

    std::cout << std::endl;
    value *= 2;
    std::cout << "Value after *= 2: " << value << std::endl;
    
    std::cout << std::endl;
    value /= 3;
    std::cout << "Value after /= 3: " << value << std::endl;
    return 0;
}