#include <iostream>

int max(int a, int b); // Function Declaration, aka. prototype 
                        // Signature doesn't include return type
                        // Declartion doesn't require variable argument but good practice to keep it just in case

int min(int a, int b);

int main(){

    int x = 5;
    int y = 12;

    int result = min(x, y);
    std::cout << "min: " << result << std::endl;

    return 0;
}

// Function definition. Shows up after main.
int max(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}

// Function definition. Shows up after main.
int min(int a, int b){
    if (a < b){
        return a;
    } else {
        return b;
    }
}