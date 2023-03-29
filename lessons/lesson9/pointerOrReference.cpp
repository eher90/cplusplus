#include <iostream>

int main(){

    // Declare pointer and reference

    double value = 12.34;
    double &r_value = value; // Reference to double value
    double *p_value = &value; // Pointer to value

    // Reading....
    std::cout << "value: " << value << std::endl;
    std::cout << "reference value: " << r_value << std::endl;
    std::cout << "pointer value: " << p_value << std::endl;
    std::cout << "pointer address: " << *p_value << std::endl;

    // Writing through pointer:
    *p_value = 15.44;

    std::cout << std::endl;
    std::cout << "value: " << value << std::endl;
    std::cout << "reference value: " << r_value << std::endl;
    std::cout << "pointer value: " << p_value << std::endl;
    std::cout << "pointer address: " << *p_value << std::endl;

    // Writing through reference
    r_value = 18.44;

    std::cout << std::endl;
    std::cout << "value: " << value << std::endl;
    std::cout << "reference value: " << r_value << std::endl;
    std::cout << "pointer value: " << p_value << std::endl;
    std::cout << "pointer address: " << *p_value << std::endl;


    double other_value = 78.45;

    double& r_other_value = other_value;
    std::cout << other_value << r_other_value << std::endl;


    return 0;
}