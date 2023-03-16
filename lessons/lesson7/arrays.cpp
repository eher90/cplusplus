#include <iostream>

int main(){
    // Declare an arry of ints
    int scores [10]; // Junk data

    // Read data
    std::cout << "scores [0]: " << scores[0] << std::endl;
    std::cout << "scores [1]: " << scores[1] << std::endl;

    // Read with a loop
    for(size_t i = 0; i < 10; i++){
        std::cout << "scores [" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << std::endl;

    // Write data into an array
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    for(size_t i=0; i < 10; i++){
        scores[i] *= 10;
    }

    // Print the data out
    for(size_t i = 0; i < 10; i++){
        std::cout << "scores [" << i << "]: " << scores[i] << std::endl;
    }

    // Declare and initalize at the same time;
    double salaries[5] = {12.7, 7.5, 13.2, 8.1, 9.3};

    for(size_t i = 0; i < 5; i++){
        std::cout << "salary[" << i << "]: " << salaries[i] << std::endl;
    }

    std::cout << std::endl;

    // Omit the size of array at declaration
    int class_sizes[] {10, 12, 15, 11, 18, 17, 23};

    // Will print this with a range based for loop
    for (auto value: class_sizes){
        std::cout << "value: " << value << std::endl;
    }

    // You can not replace a certain value in an array

    // Sum up scores array, store result in sum

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = 0;

    for (auto number: numbers){
        sum += number;
    }

    std::cout << "Score: " << sum << std::endl;

    return 0;
}