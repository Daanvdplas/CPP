#include "Dog.hpp"

Dog::Dog(void) {
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &cat) {
    this->type = cat.type;
    return (*this);
}

Dog::~Dog(void) {
    std::cout << "Destructor called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "Woof woof" << std::endl;
}
