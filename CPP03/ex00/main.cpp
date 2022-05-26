#include "Claptrap.hpp"

int main() {
	ClapTrap a("AAA");
	ClapTrap b("BEEEEE");
	ClapTrap c(a);
	ClapTrap d;

	d = c;

	for (int i = 0; i < 12; i++) {
		a.attack("Bloe");
		b.attack("Bla");
		a.takeDamage(1);
		a.beRepaired(2);
		b.takeDamage(2);
		b.beRepaired(1);
	}
	c.attack("Bloebla");
	d.attack("Blaaaaaaaa");
