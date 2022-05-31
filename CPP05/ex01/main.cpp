#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
std::cout << "-------------Bureaucrats!----------\n";
	Bureaucrat a("Daan", 1);
	Bureaucrat b("Luuk", 150);
	try {
		Bureaucrat c("Pieter", 250);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat c("Rob", 0);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;

	std::cout << "-------------Forms!----------\n";
	Form fa("form A", 1, 3);
	Form fb("form B", 150, 3);
	try {
		Form fc("form too low", 250, 3);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form fc("form too high", 0, 3);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
    Form c = fb;
	std::cout << "form a: " << fa << std::endl;
	std::cout << "form b: " << fb << std::endl;
	std::cout << "form c: " << c << std::endl;

	std::cout << "-------------Signing forms!----------\n";
    a.signForm(fb);
	b.signForm(fa);
	std::cout << "form a: " << fa << std::endl;
	std::cout << "form b: " << fb << std::endl;
}
