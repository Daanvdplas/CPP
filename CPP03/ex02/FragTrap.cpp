#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("anybody", 100, 50, 20) { 
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
	*this = fragtrap;
	std::cout << "FragTrap copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << _name << " gives random highfives" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (_energy <= 0) {
		std::cout << "FragTrap " << _name << " wants to attack " <<
			target << " but has no energy" << std::endl;
		return ;
	}
	if (_hit <= 0) {
		std::cout << "FragTrap " << _name << " wants to attack " << target << 
			", but " << _name << " has no hitpoints left" << std::endl;
		return ;
	}
	_energy--;
	std::cout << "FragTrap " << _name << " attacks " << target << std::endl;
}
