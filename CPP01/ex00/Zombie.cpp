#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzZ..." << std::endl;
}

Zombie::Zombie(std::string n)
{
	name = n;
}

Zombie::~Zombie(void)
{
	std::cout << name << " will now be destroyed" << std::endl;
}
