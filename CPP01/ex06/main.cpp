#include "Harl.hpp"
#include <iostream>

enum type_e
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NONE
};

int main(int argc, char **argv)
{
	Harl harl;
	std::string types[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	enum type_e type = NONE;

	if (argc != 2)
	{
		std::cout << "The harlfilter requires 1 argument" << std::endl;
		return (1);
	}
	std::string input = argv[1];
	for (int i = 0; i < 4; i++)
	{
		if (input == types[i])
			type = (enum type_e)i;
	}
	switch(type)
	{
		case NONE:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain("DEBUG");
			std::cout << std::endl;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			harl.complain("INFO");
			std::cout << std::endl;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain("WARNING");
			std::cout << std::endl;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain("ERROR");
			std::cout << std::endl;
	}
}
