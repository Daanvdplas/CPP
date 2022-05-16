#include "Zombie.hpp"
#include <iostream>

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzZ..." << std::endl;
}

Zombie::Zombie()
{
	name = "";
}

Zombie::~Zombie(void)
{
	std::cout << name << " will now be destroyed" << std::endl;
}
