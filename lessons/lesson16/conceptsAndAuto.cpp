#include <iostream>
#include <concepts>

// This syntax constrains auto parameters you pass in 
// to comply with std::integra concept
std::integral auto add (std::integral auto a, std::integral auto b){
    return a + b;
}

int main(){
    auto x = add(10, 8);
    return 0;
}