#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	std::cout << "-------------ShrubberyCreationForms!----------\n";
	ShrubberyCreationForm fa("shrubberytarget");
	ShrubberyCreationForm fb("T2");
	std::cout << "a is " << fa << std::endl;
	std::cout << "b is " << fb << std::endl;

	std::cout << "-------------Signing forms!----------\n";
	a.signForm(fa);
	a.signForm(fb);
	b.signForm(fa);
	b.signForm(fb);

	std::cout << "-------------executing forms----------\n";
	a.executeForm(fa);
	b.executeForm(fa);
	RobotomyRequestForm fc("notSignedTargetwoohoo");
	a.executeForm(fc);

	std::cout << "-------------RobotomyRequestForms!----------\n";
	RobotomyRequestForm ra("robotomytarget");
	RobotomyRequestForm rb("R2");
	std::cout << "form a: " << ra << std::endl;
	std::cout << "form b: " << rb << std::endl;

	std::cout << "-------------Signing forms!----------\n";
	a.signForm(ra);
	a.signForm(rb);
	b.signForm(ra);
	b.signForm(rb);

	std::cout << "-------------executing forms----------\n";
	a.executeForm(ra);
	b.executeForm(ra);
	RobotomyRequestForm rc("notSignedTargetwoohoo");
	a.executeForm(rc);

	std::cout << "-------------PresidentialPardonForms!----------\n";
	PresidentialPardonForm pa("pardontarget");
	PresidentialPardonForm pb("R2");
	std::cout << "form a: " << pa << std::endl;
	std::cout << "form b: " << pb << std::endl;

	std::cout << "-------------Signing forms!----------\n";
	a.signForm(pa);
	a.signForm(pb);
	b.signForm(pa);
	b.signForm(pb);

	std::cout << "-------------executing forms----------\n";
	a.executeForm(pa);
	b.executeForm(pa);
	PresidentialPardonForm pc("notSignedTargetwoohoo");
	a.executeForm(pc);


	std::cout << "-------------the great destruction ---------\n";
}
