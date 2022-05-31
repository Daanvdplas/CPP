#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>

Intern::Intern(void) {
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &intern) {
    (void)intern;
    std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern(void) {
    std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &intern) {
    (void)intern;
    std::cout << "Intern copy assignment operator called" << std::endl;
    return *this;
}

static Form *Shrubbery_creation(std::string target) {
    return new ShrubberyCreationForm(target);
}

static Form *Robotomy_request(std::string target) {
    return new RobotomyRequestForm(target);
}

static Form *Presidential_pardon(std::string target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string name, std::string target) {
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *(*formFunctions[])(std::string) = {Shrubbery_creation, Robotomy_request, Presidential_pardon};
    Form *newForm;

    for (size_t i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            newForm = formFunctions[i](target);
            std::cout << "Intern creates a " << name << std::endl;
            return (newForm);
        }
    }
    std::cout << "Intern couldn't make " << name << std::endl;
    return (NULL);
}
