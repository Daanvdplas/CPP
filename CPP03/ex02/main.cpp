#include "FragTrap.hpp"

int main() {
	FragTrap a("Daan");
	FragTrap b("enemy");
	FragTrap c(a);
	FragTrap d;

	d = c;

	a.attack("enemy1");
	b.attack("Daan");
	c.attack("enemy2");
	d.attack("enemy3");
	a.takeDamage(10);
	b.beRepaired(5);
	c.highFivesGuys();
}
