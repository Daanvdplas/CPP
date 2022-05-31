#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(void);
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);
        virtual ~Dog(void);
        void makeSound(void) const;
        void setIdea(int index, std::string idea);
        std::string getIdea(int index);
    private:
        Brain *brain;
};
#endif
