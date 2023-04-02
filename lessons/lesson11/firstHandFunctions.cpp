#include <iostream>

// Function that takes a single parameter,
// and doesn't give back result explicitly

void enter_bar(size_t age){

    if (age > 10){
        std::cout << "You're " << age << " years old. Please proceed." << std::endl;
    } else {
        std::cout << "Sorry, you're too young for this. No offense!" << std::endl;
    }

    return;
}

// Function that takes multiple parameters and returns result of computation
int max(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

// Function that doesn't take parameters and returns nothing
void say_hello(){
    std::cout << "Hello there" << std::endl;
    return; // You can omit this return statement for functions returning void
}


// Function that takes no parameters and return something
int lucky_number(){
    return 99;
}



// Changes to them are not visible outside of the function. What we 
// have inside the funciton are actually COPIES of the arguments
// passed to the function.

double increment_multiply(double a, double b){
    std::cout << "Inside function, before increment: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    double result = ((a++) * (b++));

    std::cout << "Inside function, after increment: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return result;
}

int main(){
    /* enter_bar(11); // Function arguments
    enter_bar(9); */

    for (size_t i = 0; i < 20; i++){
        enter_bar(i);
    }

    // Calling max
    int result = max(10, 20); // Arguments

    int x = 22;
    int y = 44;
    result = max(x, y);
    std::cout << "max: " << result << std::endl;

    // Calling say_hello
    say_hello();


    // Calling lucky number
    int result2;
    result2 = lucky_number();
    std::cout << "result: " << result2 << std::endl;

    return 0;
}