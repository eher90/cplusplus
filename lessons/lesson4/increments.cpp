#include <iostream> 

int main(){
    int value = 5;

    // Increment by one
    std::cout << "The original value is: " << value++ << std::endl;
    std::cout << "Incrementing by one results in: " << value << std::endl;

    value = 5; // Reset value to 5

    // Decreent by one
    std::cout << "The original value is: " << value-- << std::endl;
    std::cout << "Incrementing by one results in: " << value << std::endl;


    //===============================================
    return 0;
}