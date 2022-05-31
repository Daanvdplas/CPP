#include "Dog.hpp"

Dog::Dog(void) {
    type = "Dog";
    brain = new Brain;
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) {
    *this = dog;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &cat) {
    this->type = cat.type;
    this->brain = new Brain(*(cat.brain));
    return (*this);
}

Dog::~Dog(void) {
    delete brain;
    std::cout << "Destructor called" << std::endl;
}

void Dog::makeSound(void) const{
    std::cout << "Woof woof" << std::endl;
}

void Dog::setIdea(int index, std::string idea) {
    brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) {
    return brain->getIdea(index);
}
