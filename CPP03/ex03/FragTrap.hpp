#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap {
    public:
        FragTrap(void);
        FragTrap(std::string);
        FragTrap(const FragTrap &fragtrap);
        ~FragTrap(void);
        void attack(const std::string &target);
        void highFivesGuys(void);
};

#endif
