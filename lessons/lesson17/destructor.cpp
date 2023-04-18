#include <iostream>
#include <string_view>

class Dog{
    public:
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);
        ~Dog();

        void print_info(){
            std::cout << "Dog (" << this << "); [name: " << name << " breed: " breed << " age: " << *p_age << "]" << std::endl;
        }

        // Setters
        void set_dog_name(std::string_view name){
            name = name;
        }

    private:
        std::string name;
        std::string breed;
        int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param){
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called for " << name << " at " << this << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "Dog destructor called for: " << name << " at " << this << std::endl;
}


int main(){

    Dog dog1("Doggy1", "Shephard", 2);

    dog1.print_info();

    Dog dog2("Doggy2", "Shephard", 3);
    Dog dog3("Doggy3", "Shephard", 5);
    Dog dog4("Doggy4", "Shephard", 1);

    return 0;
}