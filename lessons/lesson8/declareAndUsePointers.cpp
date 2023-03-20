#include <iostream>

int main(){

    // Declare and initalize pointer
    int * p_number = nullptr; // Will initalize with nullptr
    double * p_fractional_number = nullptr;

    // Explicitly initalize with nullptr
    int * p_number1 = nullptr;
    int * p_fractional_number1 = nullptr;

    // Initalizing pointers and assigning them data
    // We know that pointers store addresses of variables
    int int_var = 43;
    int *p_int = &int_var;

    std::cout << "Int var: " << int_var << std::endl;
    std::cout << "p_int address: " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1 = 65;
    p_int = &int_var1; // Assign a different address to the pointer

    std::cout << "p_int (with different address) : " << p_int << std::endl;

    // Pointer and variable must be of same time else compiler error!

    // Dereferencing a pointer:
    int* p_int2 = nullptr;
    int int_data = 56;
    p_int2 = &int_data;

    std::cout << "value: " << *p_int2 << std::endl; // Derefercing a pointer


    return 0;
}