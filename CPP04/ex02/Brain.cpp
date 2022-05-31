#include "Brain.hpp"

Brain::Brain(void) {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
    for (size_t i = 0; i < 100; i++)
        ideas[i] = brain.ideas[i];
    return (*this);
}

Brain::~Brain(void) {
    std::cout << "Destructor called" << std::endl;
}

void Brain::setIdea(int index, std::string idea) {
    ideas[index] = idea;
}

std::string Brain::getIdea(int index) {
    return (ideas[index]);
}
