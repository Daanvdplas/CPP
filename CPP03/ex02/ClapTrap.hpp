#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap &operator=(const ClapTrap &claptrap);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		virtual ~ClapTrap(void);
	protected:
		ClapTrap(std::string name, int hit, int energy, int attack);
		std::string _name;
		int 		_hit;
		int			_energy;
		int			_attack;
};

#endif
