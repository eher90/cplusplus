#include <iostream>

int main(){

    // Capture Lists
    double a = 10;
    double b = 20;

    auto func = [a, b](){
        std::cout << "a + b: " << a + b << std::endl;
    };

    func();


    // Capturing by Reference
    int c = 42;

    auto func2 = [c](){
        std::cout << "Inner value: " << c << " &inner: " << &c << std::endl;
    };

    for (size_t i = 0; i < 5; i++){
        std::cout << "Outer value: " << c << " &outer: " << &c << std::endl;
        func2();
        c++;
    }

    return 0;
}