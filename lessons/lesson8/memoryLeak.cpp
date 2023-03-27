#include <iostream>

int main(){
    int *p_number {new int{67}}; // Points to some address

    // Should delete and reset here

    int number{55}; // lives at address 2

    p_number = &number;  // We just override the address but lost access to original
}