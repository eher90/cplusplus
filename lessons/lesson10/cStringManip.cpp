#include <iostream>
#include <cstring>

int main(){

    // std::strlen, finds the length of a string
    // real arrays and those decayed into pointers
    const char message1[] = {"The sky is blue."};

    // Array decays into pointer when we use const char*
    const char* message2 = "The sky is blue.";
    std::cout << "message1: " << message1 << std::endl;

    //strlen ignores null character
    std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;

    // Includes the null character
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

    // strlen still works with decayed arrays
    std::cout << "strlen(message2): " << std::strlen(message2) << std::endl;

    // Print size of pointer
    std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;




    // std::strcmp 
    // Compares two strings in regards to order in lexicographical order. 
    // Before -1, Equal 0, After 1

    std::cout << std::endl;
    std::cout << "std::strcmp: " << std::endl;
    const char* string_data1 = "Alabama";
    const char* string_data2 = "Blabama";

    char string_data3[] = {"Alabama"};
    char string_data4[] = {"Blabama"};

    // Print out the comparison
    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): "
        << std::strcmp(string_data1, string_data2) << std::endl;
    

    string_data1 = "Hello";
    string_data2 = "Hello";

        std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): "
        << std::strcmp(string_data1, string_data2) << std::endl;
    



    // We use std::strchr to find all the characters one by one
    const char *str = "Try not. Do, or do not. There is no try";
    char target = 'T';
    const char *result = str;
    size_t iterations = 0;

    
    

    return 0;
}