#include <iostream>
#include "player.h"
#include "player.cpp"

int main(){

    Player p1("Basketball", "John", "Snow");

    std::cout << "player: " << p1 << std::endl;

    return 0;
}