#include <iostream>

const double PI{3.14159265358979};

class Cylinder{
    public:

        // Constructors
        Cylinder(){
            base_radius = 2.0;
            height = 2.0;
        }

        Cylinder(double rad_param, double height_param){
            base_radius = rad_param;
            height = height_param;
        }

        // Functions (methods)
        double volume(){
            return (PI * base_radius * base_radius * height);
        }

    private: 
        // Member variables (Keep variables private unless you have a reason to make them public)
        double base_radius{1};
        double height{1};
};

int main(){
    // Cylinder cylinder1(10, 4); // Object
    Cylinder cylinder1;
    std::cout << "volume: " << cylinder1.volume() << std::endl;

    return 0;
}