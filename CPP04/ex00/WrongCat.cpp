#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongcat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongcat) {
    this->type = wrongcat.type;
    return (*this);
}

WrongCat::~WrongCat(void) {
    std::cout << "Destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
    std::cout << "Wiaauummm" << std::endl;
}
