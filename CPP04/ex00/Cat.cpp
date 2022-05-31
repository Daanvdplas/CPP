#include "Cat.hpp"

Cat::Cat(void) {
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
    this->type = cat.type;
    return (*this);
}

Cat::~Cat(void) {
    std::cout << "Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Miaauuwww" << std::endl;
}
