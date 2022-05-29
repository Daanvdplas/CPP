#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("someone_CT"), _name("someone") {
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_CT"), _name(name) {
	std::cout << "DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) {
	*this = diamondtrap;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "Diamond_" << _name << " & ClapTrap_" << ClapTrap::_name 
        << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
    ScavTrap::attack(target);
}
