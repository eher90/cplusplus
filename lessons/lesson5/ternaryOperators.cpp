#include <iostream>

int main(){

    int a = 20;
    int b = 10;

    int result = (a > b)? a: b; // Ternary operator

    std::cout << "The greater number is: " << result << std::endl;
}