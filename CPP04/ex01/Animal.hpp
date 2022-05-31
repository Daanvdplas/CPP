#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include "Brain.hpp"

class   Animal {
    public:
        Animal(void);
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);
        std::string getType(void) const;
        virtual ~Animal(void);
        virtual void makeSound(void) const;
        void setIdea(int index, std::string idea);
        std::string getIdea(int index);
    protected:
        std::string type;
        Brain *brain;
};

#endif
