#include <iostream>
#include <iomanip>

int main(){

    // Declare and initialize the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    // Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "size of double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);
    std::cout << "number1 is: " << number1 << std::endl;
    std::cout << "number2 is: " << number2 << std::endl;
    std::cout << "number3 is: " << number3 << std::endl; 


    // Float problems: Precision is too limited
    // for a lot of applications

    float number4 {19240023.0f};

    std::cout << "number4: " << number4 << std::endl;
    
    return 0;
}