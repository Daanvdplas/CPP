#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat(const Cat &cat);
        Cat &operator=(const Cat &cat);
        virtual ~Cat(void);
        void makeSound(void) const;
        void setIdea(int index, std::string idea);
        std::string getIdea(int index);
    private:
        Brain *brain;
};
#endif
