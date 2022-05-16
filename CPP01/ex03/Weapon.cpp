#include "Weapon.hpp"

Weapon::Weapon(std::string new_type) : _type(new_type) {}

void	Weapon::setType(std::string new_type)
{
	if (new_type == "")
		return ;
	_type = new_type;
}

const std::string &Weapon::getType()
{
	return _type;
}
