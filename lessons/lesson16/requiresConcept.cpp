#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t){
    sizeof(T) < 4; // Simple requirement: Only enforces syntax
    requires sizeof(T) < 4; // Nested requirements
};

TinyType auto add(TinyType auto a, TinyType auto b){
    return a + b;
}

// Compound requirements
template <typename T>
concept Addable = requires(T a, T b){
    //nonexcept is optional
    {a+b} noexcept -> std::convertible_to<int>;
}



int main(){
    char x = 67;
    char y = 56;

    auto result = add(x, y);
    std::cout << "result: " << result << std::endl;

    return 0;
}