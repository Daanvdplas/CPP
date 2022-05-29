#include "DiamondTrap.hpp"

int main() {
	DiamondTrap a("Daan");
	DiamondTrap b("enemy");
	DiamondTrap c(a);
	DiamondTrap d;

	d = c;

	a.attack("enemy1");
	b.attack("Daan");
	c.attack("enemy2");
	d.attack("enemy3");
	c.whoAmI();
}
