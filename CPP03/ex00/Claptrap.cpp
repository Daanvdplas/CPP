#include "Claptrap.hpp"

Claptrap::Claptrap(void) : _name("Nobody"), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Claptrap::Claptrap(std::string name) : _name(name), _hit(10), _energy(10), _attack(0)
{
	std::cout << "Name constructor called" << std::endl;
}

Claptrap::Claptrap(const Claptrap &claptrap)
{
	_name = claptrap._name;
	_hit = claptrap._hit;
	_energy = claptrap._energy;
	_attack = claptrap._attack;
	std::cout << "Copy constructor called" << std::endl;
}

Claptrap &Claptrap::operator=(const Claptrap &claptrap)
{
	_name = claptrap._name;
	_hit = claptrap._hit;
	_energy = claptrap._energy;
	_attack = claptrap._attack;
	std::cout << "Copy assignment operator called" << std::endl;
}

void	Claptrap::attack(const std::string &target)
{
	if (_energy > 0)
		target.takeDamage(_attack);
	else
		std::cout << _name << " wants to attack " <<
			target._name << " but has no energy" << std::endl;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	_hit -= amount;
	std::cout << _name << " is hit and takes " <<
		amount << " Damage" << std::endl;
}

void	Claptrap::beRepaired(unsigned int amount)
{
	if (_energy > 0)
		_hit += amount;
	else
		std::cout << _name << " wants to repair but has no energy" <<
			std::endl;
}

Claptrap::~Claptrap(void)
{
	std::cout "Destructor called" << std::endl;
}
