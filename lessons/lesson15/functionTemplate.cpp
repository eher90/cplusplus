#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b){
    return (a > b)? a : b;
}

template <typename T>
T multiply(T a, T b){
    return a * b;
}


int main(){

    std::string x = "Hello";
    std::string y = "World";

    auto result = maximum(x, y);
    std::cout << "result: " << result << std::endl;


    double c = 5.2;
    double d = 7;
    auto result2 = multiply(c, d);
    std::cout << "result: " << result2 << std::endl;

    return 0;
}