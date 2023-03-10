#include <iostream>

int main(){
    // Braced initalizers
    // Variable may contain random garbage value. WARNING
    int elephant_count;
    int lion_count{}; // Initalizes to zero
    int dog_count{10}; // Initalizes to 10
    int cat_count{15}; // Initalizes to 15

    // Can use expression as initalizer
    int domesticated_animals{dog_count + cat_count};
    
    std::cout << dog_count << std::endl;
}