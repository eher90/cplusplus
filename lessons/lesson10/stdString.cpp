#include <iostream>
#include <string>

int main(){

    std::string full_name; // Empty string
    std::string planet = "Earth";
    std::string preferred_planet = planet;
    std::string message {"Hello there", 5};

    std::string weird_message (4, 'e');
    std::string greeting = "Hello World!";
    std::string saying_hello {greeting, 6, 5};

    std::cout << "full_name: " << full_name << std::endl;
    std::cout << "planet: " << planet << std::endl;
    std::cout << "preferred_planet: " << preferred_planet << std::endl;
    std::cout << "message: " << message << std::endl;
    std::cout << "weird_message: " << weird_message << std::endl;
    std::cout << "greeting: " << saying_hello << std::endl;
    std::cout << "saying_hello: " << saying_hello << std::endl;

    return 0;
}