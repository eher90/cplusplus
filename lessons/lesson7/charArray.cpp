#include <iostream>

int main(){

    // Declare array
    char message[5] ={'H', 'e', 'l', 'l', 'o'};

    // Print out the array using looping
    std::cout << "message: ";
    for(auto c: message){
        std::cout << c;
    }

    std::cout << std::endl;

    // Change characters in array
    message[1] = 'a';

    std::cout << "message: ";
    for(auto c: message){
        std::cout << c;
    }

    std::cout << std::endl;

    std::cout << message << std::endl;

    // If a character array is null terminated, it is a C-string

    // When printing strings, you need to add a null terminator in one of two ways!
    char message1[] ={'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message1: " << message1 << std::endl;

    char message2[6] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << "message1: " << message1 << std::endl;


    return 0;
}