#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("anybody", 100, 50, 20) { 
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
	*this = scavtrap;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << _name << " is now in gatekeeping mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_energy <= 0) {
		std::cout << "ScavTrap " << _name << " wants to attack " <<
			target << " but has no energy" << std::endl;
		return ;
	}
	if (_hit <= 0) {
		std::cout << "ScavTrap " << _name << " wants to attack " << target << 
			", but " << _name << " has no hitpoints left" << std::endl;
		return ;
	}
	_energy--;
	std::cout << "ScavTrap " << _name << " attacks " << target << std::endl;
}
