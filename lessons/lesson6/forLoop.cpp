#include <iostream>

int main(){
    // for loop: the good way

    for(unsigned int i=0; i < 10; i++){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    std::cout << std::endl;

    // Use size_t : a representation of some unsigned int for positive numbers [sizes]

    for (size_t i=0; i < 10; i++){
        std::cout << i << " : I love C++" << std::endl;
    }

    std::cout << "Loop done!" << std::endl;

    // Iterator outside of loop
    size_t i = 0;

    for (i; i < 10; i++){
        std::cout << i << " : I love C++" << std::endl;
    }

    std::cout << "Loop done!" << std::endl;
    std::cout << "i: " << i << std::endl;

    return 0;

    // DO NOT HARD CODE VALUES aka the limit of the for loop var=number (BAD!)
}