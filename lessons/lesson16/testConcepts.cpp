#include <concepts>
#include <iostream>

template <typename T>
concept Number = std::integral<T> || std::floating_point<T>;

auto add(Number auto a, Number auto b) {
  return a+b;
}

int main() {
    std::cout << "add(1, 2): " << add(1, 2) << '\n';
    std::cout << "add(1, 2.14): " << add(1, 2.14) << '\n';
    // std::cout << "add(\"one\", \"two\"): " << add("one", "two") << '\n'; // error: invalid operands of types 'const char*' and 'const char*' to binary 'operator+'
    std::cout << "add(true, false): " << add(true, false) << '\n';
}

/*
add(1, 2): 3
add(1, 2.14): 3.14
add(true, false): 1
*/