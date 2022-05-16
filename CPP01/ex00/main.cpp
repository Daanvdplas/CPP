#include "Zombie.hpp"

int main(void)
{
	Zombie* nz = newZombie("Daan");
	nz->announce();

	randomChump("Max");

	delete(nz);
}
