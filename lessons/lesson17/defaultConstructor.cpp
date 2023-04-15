#include <iostream>

const double PI = 3.14159;

class Cylinder{
    public:
        // Constructors
        Cylinder() = default;

        Cylinder(double rad_param, double height_param){
            base_radius = rad_param;
            height = height_param;
        }

        // Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }

    private:
        // Member variables
        double base_radius{1};
        double height{1};
};


int main(){
    Cylinder cylinder;
    std::cout << "volume: " << cylinder.volume() << std::endl;

    Cylinder cylinder2(2, 1);
    std::cout << "volume: " << cylinder2.volume() << std::endl;

    return 0;
}