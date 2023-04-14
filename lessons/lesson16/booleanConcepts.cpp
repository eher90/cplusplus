#include <iostream>
#include <concepts>

template <typename T>
concept TinyType requires(T t){
    sizeof(T) <= 4; // Simple requirement
    requires sizeof(T) <= 4;
}

template <typename T>
requires std::integral<T> || std::floating_point<T> // or &&
T add(T a, T b){
    return a + b;
}

int main(){

    return 0;
}