#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>

class   WrongAnimal {
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &wronganimal);
        WrongAnimal &operator=(const WrongAnimal &wronganimal);
        std::string getType(void) const;
        virtual ~WrongAnimal(void);
        virtual void makeSound(void) const;
    protected:
        std::string type;
};

#endif
