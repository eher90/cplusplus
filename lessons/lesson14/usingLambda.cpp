#include <iostream>

int main(){
    /* 
    Lambda function signature:
        [capture list](parameters) -> return type{
            // Function body
        }
    
    */


   // Declaring a lambda function and calling it through a name
   auto func = [](){
    std::cout << "Hello World!" << std::endl;
   };

   func();
   func();






   // Declare a lambda function and call it directly
   [](){
    std::cout << "Hello World Part 2!" << std::endl;
   }();





   // Lamda function that takes parameters
    [](double a, double b){
    std::cout << "a+b: " << (a + b) << std::endl;
   }(10.0, 5.0);


    auto func1 = [](double a, double b){
    std::cout << "a+b: " << (a + b) << std::endl;
   };

   func1(5, 7);








   // Lambda function that returns something
   auto result = [](double a, double b){
    return a + b;
   }(10, 20);

   std::cout << "result: " << result << std::endl;


    std::cout << "result: " << [](double a, double b){
    return a + b;
   }(100, 250) << std::endl;






   auto func2 = [](double a, double b){
    return a + b;
   };

   auto result1 = func2(23, 7);
   auto result2 = func2(9, 45);

   std::cout << "result1: " << result1 << std::endl;
   std::cout << "result2: " << result2 << std::endl;
   std::cout << "direct call: " << func2(5, 2) << std::endl;


    // Explicitly specify return type
    auto func5 = [](double a, double b)-> int{
        return a + b;
    };

    double a = 6.9;
    double b = 3.5;

    auto result3 = func5(a, b);
    std::cout << result3 << std::endl;





   std::cout << "Done!" << std::endl;

    return 0;
}