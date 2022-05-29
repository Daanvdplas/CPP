#include "ScavTrap.hpp"

int main() {
	ScavTrap a("Daan");
	ScavTrap b("enemy");
	ScavTrap c(a);
	ScavTrap d;

	d = c;

	a.attack("enemy1");
	b.attack("Daan");
	c.attack("enemy2");
	d.attack("enemy3");
	a.takeDamage(10);
	b.beRepaired(5);
	c.guardGate();
}
