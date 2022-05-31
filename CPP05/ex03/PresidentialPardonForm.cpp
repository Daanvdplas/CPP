#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 3, target) {
    std::cout << "pres default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &pres) : \
    Form(pres.getName(), pres.getSignGrade(), pres.getExecGrade(), pres.getTarget()) {
    std::cout << "pres copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "pres destructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    check_execute(executor);
    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
