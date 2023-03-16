#include <iostream>

int main(){
    int scores [] = {1, 2, 3, 4, 5, 6, 7, 8};

    // int count = std::size(scores);

    std::cout << "sizeof(scores): " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]): " << sizeof(scores[0]) << std::endl;

    int count = sizeof(scores)/sizeof(scores[0]);

    for(size_t i = 0; i < count; i++){
        std::cout << "scores [" << i << "]: " << scores[i] << std::endl;
    }

    // Or...
    for(auto i: scores){
        std::cout << i << std::endl;
    }

    return 0;
}