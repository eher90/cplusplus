#include <iostream>

int main(){

    // int *data = new int[1000000000000000000000];

    /* Wont work: for(size_t i=0; i < 10000000000; i++){
        int *data = new int[10000000000];
    } */

    // Options: Use exception or std::nothrow


    /*for(size_t i=0; i < 10000000; i++){
            try {
        int *data = new int[10000000];
    } catch(std::exception &ex){
        std::cout << "Something went wrong: " << ex.what() << std::endl;
        }
    } */

    for (size_t i=0; i < 100; i++){
        int *data = new(std::nothrow) int[1000000];

        if (data != nullptr){
            std::cout << "Data allocated" << std::endl;
        } else {
            std::cout << "Data allocation failed" << std::endl;
        }
    }

    std::cout << "Program ending well" << std::endl;

    return 0;
}