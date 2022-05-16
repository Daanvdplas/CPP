#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		static Zombie *zombieHorde(int N, std::string name);
		void announce(void);

	private:
		std::string name;
};

Zombie* zombieHorde(int N, std::string name);

void	randomChump(std::string name);
#endif
