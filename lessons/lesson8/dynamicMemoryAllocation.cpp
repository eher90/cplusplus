#include <iostream>

int main(){
    // How we used pointers so far
    int number = 22; // Stack
    int *p_number = &number;

    std::cout << std::endl;
    std::cout << "Declaring pointer and assigning address: " << std::endl;
    std::cout << "number: " << number << std::endl;
    std::cout << "p_number: " << p_number << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "*p_number: " << *p_number << std::endl;

    int *p_number1; // Uninitializec poiner, contins junk address
    int number1 = 12;
    p_number1 = &number1; // Make it point to valid address
    std::cout << std::endl;
    std::cout << "Uninitalized pointer: " << std::endl;
    std::cout << "*p_number1: " << *p_number1 << std::endl;


    // Dynamic heap memory
    int *p_number4 = nullptr;
    p_number4 = new int; // Dynamically allocate space for single int on heap
                         // Belonogs to program for now on.
    
    *p_number4 = 77; // Writing into dynamically allocated memory
    std::cout << std::endl;
    std::cout << "Dynamically allocating memory: " << std::endl;
    std::cout << *p_number4 << std::endl;

    // Return memory to OS
    delete p_number4;
    p_number4 = nullptr;

    // Can reuse pointers
    p_number4 = new int(81);
    std::cout << "*p*number: " << *p_number4 << std::endl;

    delete p_number4;
    p_number4 = nullptr;

    std::cout << "Program is ending well" << std::endl;


    return 0;
}