#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>

class   Animal {
    public:
        Animal(void);
        Animal(const Animal &animal);
        Animal &operator=(const Animal &animal);
        std::string getType(void) const;
        virtual ~Animal(void);
        virtual void makeSound(void) const;
    protected:
        std::string type;
};

#endif
