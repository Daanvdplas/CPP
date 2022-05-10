#include <iostream>
#include <string>
#include "Phonebook.hpp"

int	main(void)
{
	std::string	input;
	Phonebook	phonebook;

	while (std::cin)
	{
		getline(std::cin, input);
		if (!input.compare("ADD"))
			phonebook.add();
		else if (!input.compare("SEARCH"))
			phonebook.search();
		else if (!input.compare("EXIT"))
			return (0);
		else
			std::cout << "Unvalid argument" << std::endl;
	}
	return (0);
}
