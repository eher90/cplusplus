#include <iostream>

int main(){
    bool a = true;
    bool b = false;
    bool c = true;

    std::cout << std::boolalpha;

    std::cout << (a && b) << std::endl;
    std::cout << (a && c) << std::endl;
    std::cout << (a && b && c) << std::endl;

    std::cout << std::endl;
    std::cout << (a || b) << std::endl;
    std::cout << (a || c) << std::endl;
    std::cout << (a || b || c) << std::endl;    

    std::cout << std::endl;
    std::cout << (!a) << std::endl;
    std::cout << (!b) << std::endl;
    std::cout << (!c) << std::endl;  
}