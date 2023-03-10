#include <iostream>

int main(){
    bool red_light {false};
    bool green_light {false};

    if (red_light == true){
        std::cout << "Stop!" << std::endl;
    } else {
        std::cout << "Go through!" << std::endl;
    }

    if(green_light){
        std::cout << "The light is green!" << std::endl;
    } else {
        std::cout << "The light is NOT green!" << std::endl;
    }

    // Size of booleans

    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    return 0;
}