#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./ft_sed filename str1 str2" << std::endl;
		return (1);
	}
	std::string str1 = argv[2];
	std::string str2 = argv[3];
	std::ifstream in(argv[1]);
	std::string newfile = argv[1];
	newfile.append(".replace");
	std::ofstream out(newfile);
	if (!in)
	{
		std::cout << "Can not find " << argv[1] << std::endl;
		return (1);
	}
	if (!out)
	{
		std::cout << "Can not open " << newfile << std::endl;
		return (1);
	}
	if (!str1.size())
	{
		std::cout << "String 1 can not be empty" << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(in, line))
	{
		size_t pos = 0;
		while (pos != std::string::npos)
		{
			pos = line.find(str1, pos);
			if (pos != std::string::npos)
			{
				line = line.substr(0, pos) + str2 + line.substr(pos + str1.size(), line.size());
				pos += str1.size();
			}
			else
				out << line << std::endl;
		}
	}
	in.close();
	out.close();
	return (0);
}
