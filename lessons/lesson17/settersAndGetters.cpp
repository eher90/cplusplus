#include <iostream>

const double PI{3.141592};

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

        // Setter and getter methods

        // Getters
        double get_base_radius(){
            return base_radius;
        }

        double get_height(){
            return height;
        }


        // Setters
        void set_base_radius(double rad_param){
            base_radius = rad_param;
        }

        void set_height(double height_param){
            height = height_param;
        }


    
    private:
        // Member variables
        double base_radius{1};
        double height{1};
};

int main(){
    Cylinder cylinder1(2, 3);
    std::cout << "base radius: " << cylinder1.get_base_radius() << std::endl;
    std::cout << "volume: " << cylinder1.volume() << std::endl;

    // Modify our object
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);

    std::cout << "volume: " << cylinder1.volume() << std::endl;

    return 0;
}