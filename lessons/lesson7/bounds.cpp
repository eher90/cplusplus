#include <iostream>

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    //Read beyond bounds: Will read garbage or crash program
    std::cout << "numbers[12]: " << numbers[12] << std::endl;

    // Write beyond bounds, compiler allows it. But you don't own memory at index 12.
    // Other programs may modify it and raid bogus data. Or corrupt data.
    numbers[12999999] = 1000;
    std::cout << "numbers[12999999]: " << numbers[12999999] << std::endl;

    return 0; 
}