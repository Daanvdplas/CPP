#include "Animal.hpp"

Animal::Animal(void) : type("Weird animal") {
    std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
    this->type = animal.type;
    return (*this);
}

Animal::~Animal(void) {
    std::cout << "Destructor called" << std::endl;
}

void Animal::makeSound(void) const{
    std::cout << "Hello my name is Arnold" << std::endl;
}

std::string Animal::getType() const {
    return type;
}
