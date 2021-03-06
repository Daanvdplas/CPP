#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(const WrongCat &wrongcat);
        WrongCat &operator=(const WrongCat &wrongcat);
        virtual ~WrongCat(void);
        void makeSound(void) const;
};
#endif
