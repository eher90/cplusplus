#include <iostream>
#include <cstring>

int main(){

    // Concatenation
    std::cout << std::endl;
    std::cout << "std::strcat : " << std::endl;

    char dest[50] = "Hello ";
    char src[50] = "World!";
    std::strcat(dest, src);
    std::cout << "dest: " << dest << std::endl;
    std::strcat(dest, " Goodbye World!");
    std::cout << "dest: " << dest << std::endl;

    // std::strcpy 
    std::cout << std::endl;
    std::cout << "std::strcpy: " << std::endl;
    const char* source3 = "C++ is a multipurpose programming language.";
    char *dest3 = new char[std::strlen(source3) + 1];

    std::strcpy(dest3, source3);

    std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl;
    std::cout << "dest3: " << dest3 << std::endl;



    return 0;
}