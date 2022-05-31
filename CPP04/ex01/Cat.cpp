#include "Cat.hpp"

Cat::Cat(void) {
    type = "Cat";
    brain = new Brain;
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) {
    *this = cat;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
    this->type = cat.type;
    this->brain = new Brain(*(cat.brain));
    return (*this);
}

Cat::~Cat(void) {
    delete brain;
    std::cout << "Destructor called" << std::endl;
}

void Cat::makeSound(void) const {
    std::cout << "Miaauuwww" << std::endl;
}

void Cat::setIdea(int index, std::string idea) {
    brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) {
    return brain->getIdea(index);
}
