#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat a("Daan", 1);
	Bureaucrat b("Pieter", 150);
	Bureaucrat c(a);
	try {
		Bureaucrat c("Stijn", 250);
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
    try {
        c.incrementGrade(); 
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    a.decrementGrade();
    b.incrementGrade();
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;

	b = a;
	std::cout << "b is now " << b << std::endl;
}
