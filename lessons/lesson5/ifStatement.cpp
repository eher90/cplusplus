#include <iostream>

int main(){
    int number1 = 55;
    int number2 = 60;

    bool result = (number1 < number2);
    std::cout << std::boolalpha << "result: " << result << std::endl;

    if (result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    if (!(result == true)){
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    int test1 = 5;
    int test2 = 1;

    if (test1 > test2){
        std::cout << test1 << " is greater than " << test2 << std::endl;
    } else {
        std::cout << test1 << " is less than " << test2 << std::endl;
    }

    return 0;
}