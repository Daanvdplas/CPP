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
        //making it an abstract class by making one pure virtual function
        virtual void makeSound(void) const = 0;
        void setIdea(int index, std::string idea);
        std::string getIdea(int index);
    protected:
        std::string type;
        Brain *brain;
};

#endif
