#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Nobody"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	_name = claptrap._name;
	_hit = claptrap._hit;
	_energy = claptrap._energy;
	_attack = claptrap._attack;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	_name = claptrap._name;
	_hit = claptrap._hit;
	_energy = claptrap._energy;
	_attack = claptrap._attack;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy <= 0) {
		std::cout << _name << " wants to attack " <<
			target << " but has no energy" << std::endl;
		return ;
	}
	if (_hit <= 0) {
		std::cout << _name << " wants to attack " << target << 
			", but " << _name << " has no hitpoints left" << std::endl;
		return ;
	}
	_energy--;
	std::cout << _name << " attacks " << target << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit <= 0)
	{
		std::cout<< _name << " is already dead" << std::endl;
		return ;
	}
	_hit -= amount;
	std::cout << _name << " takes " <<
	amount << " damage" << " and has " << _hit << " hitpoints" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit <= 0) {
		std::cout << _name << " can't be repaired because it is already dead"
			<< std::endl;
		return ;
	}
	if (_energy <= 0) {
		std::cout << _name << " wants to repair but has no energy" <<
			std::endl;
		return ;
	}
	_hit += amount;
	std::cout << _name << " is repaired with " <<
	amount << " and has " << _hit << " hitpoints" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}
