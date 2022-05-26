#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class	Claptrap
{
	public:
		Claptrap(void);
		Claptrap(std::string name);
		Claptrap(const Claptrap &claptrap);
		Claptrap &operator=(const Claptrap &claptrap);
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		~Claptrap(void);
	private:
		std::string _name;
		int 		_hit;
		int			_energy;
		int			_attack;
}

#endif
