#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include "Phonebook.hpp"

void	Phonebook::add(void)
{
	Contact	new_contact;

	std::cout << "Please enter the first name: ";
	getline(std::cin, new_contact.first_name);
	std::cout << "Please enter the last name: ";
	getline(std::cin, new_contact.last_name);
	std::cout << "Please enter the nickname: ";
	getline(std::cin, new_contact.nickname);
	std::cout << "Pleasse enter the phone number: ";
	getline(std::cin, new_contact.phone_number);
	std::cout << "Please enter the darkest secret: ";
	getline(std::cin, new_contact.darkest_secret);
	if (!new_contact.first_name[0] || !new_contact.last_name[0]\
			|| !new_contact.nickname[0] || !new_contact.phone_number[0]\
			|| !new_contact.darkest_secret[0])
		return;
	if (contact_index == 8)
		contact_index = 0;
	new_contact.index = contact_index;
	contacts[contact_index] = new_contact;
	contact_index++;
}

void	Phonebook::search_print(std::string str, int newline)
{
	if (str.size() < 10)
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
	else
	{
		std::cout << std::setw(9);
		std::cout << str.substr(0, 9) << ".";
	}
	if (!newline)
		std::cout << "|";
	else
		std::cout << std::endl;
}

int		Phonebook::get_index(int contacts_len)
{
	int	index;

	std::cout << "Please enter contact index: " << std::endl;
	std::cin >> index;
	if (std::cin.fail())
	{
		if (!std::cin && index == -1)
			exit(1);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Incorrect index input" << std::endl << std::endl;
		return (get_index(contacts_len));
	}
	if (index < 0 || index > contacts_len)
	{
		std::cout << "Incorrect index input; out of range" << std::endl << std::endl;
		return (get_index(contacts_len));
	}
	return (index);
}

void	Phonebook::search(void)
{
	int	contacts_len;
	int	index;

	contacts_len = 7;
	if (!contacts[0].first_name[0])
	{
		std::cout << "No contacts added yet" << std::endl;
		return ;
	}
	for (int i = 0; i < 8; i++)
	{
		if (!contacts[i].first_name[0])
		{
			contacts_len = i - 1;
			break ;
		}
		std::cout << std::setw(10);
		std::cout << contacts[i].index << "|";
		search_print(contacts[i].first_name, 0);
		search_print(contacts[i].last_name, 0);
		search_print(contacts[i].nickname, 1);
	}
	index = get_index(contacts_len);
	std::cout << "first name: " << contacts[index].first_name << std::endl;
	std::cout << "last name: " << contacts[index].last_name << std::endl;
	std::cout << "nickname: " << contacts[index].nickname << std::endl;
	std::cout << "phone number: " << contacts[index].phone_number << std::endl;
	std::cout << "darkest secret: " << contacts[index].darkest_secret << std::endl;
}
