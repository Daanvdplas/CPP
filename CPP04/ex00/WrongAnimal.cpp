#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Strange wronganimal") {
    std::cout << "Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wronganimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wronganimal) {
    this->type = wronganimal.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const{
    std::cout << "Hello my name is Jordy" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}
