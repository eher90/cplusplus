#include <iostream>

int main(){
    int value = 12345;
    const int &new_value = value;

    std::cout << value << std::endl;
    std::cout << &value << std::endl;

    std::cout << new_value << std::endl;
    std::cout << &new_value << std::endl;
}