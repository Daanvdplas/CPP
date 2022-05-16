#include "Zombie.hpp"

int main(void)
{
	Zombie* horde = Zombie::zombieHorde(9, "Max");
	for (int i = 0; i < 9; i++)
		horde[i].announce();
	delete[] horde;;
}
