#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Daan");
	ClapTrap b("enemy");
	ClapTrap c(a);
	ClapTrap d;

	d = c;

	for (int i = 0; i < 12; i++) {
		a.attack("enemy");
		b.attack("Daan");
		a.takeDamage(1);
		a.beRepaired(2);
		b.takeDamage(2);
		b.beRepaired(1);
	}
	c.attack("Bloebla");
	d.attack("Blaaaaaaaa");
}
