#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

void HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() 
			<< "." << std::endl;
	else
		std::cout << _name << " doesn't have a weapon." << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}
