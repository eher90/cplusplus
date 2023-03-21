#include <iostream>

int main(){

    const char *message = "Hello World";
    std::cout << "message: " << message << std::endl;
    std::cout << "*message: " << *message << std::endl;

    // *message = "B"; // Compiler error

    // Allow users to modify the string
    char news[] {'Hello World'};
    news[0] = 'B';
    std::cout << "message1: " << news << std::endl;

    return 0;
}