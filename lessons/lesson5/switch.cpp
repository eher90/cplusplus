#include <iostream>

// Tools
const int Pen = 10;
const int Marker = 20;
const int Eraser = 30;
const int Rectangle = 40;
const int Circle = 50;
const int Ellipse = 60;

int main(){

    int tool = Eraser;

    switch (tool)
    {
    case Pen: {
        std::cout << "Active pool is pen" << std::endl;
    }
        break;
    
    case Marker: {
        std::cout << "Active pool is marker" << std::endl;
    }
        break;
    
    case Eraser: {
        std::cout << "Active pool is eraser" << std::endl;
    }
        break;
    
    case Rectangle: {
        std::cout << "Active pool is rectangle" << std::endl;
    }
        break;
    
    case Circle: {
        std::cout << "Active pool is circle" << std::endl;
    }
        break;
    
    case Ellipse: {
        std::cout << "Active pool is ellipse" << std::endl;
    }
        break;

    default:{
        std::cout << "No match found" << std::endl;
    }
        break;
    }

    std::cout << "Moving on" << std::endl;

    return 0;
}