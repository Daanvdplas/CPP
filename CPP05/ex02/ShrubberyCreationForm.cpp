#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target) {
    std::cout << "Shrub default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrub) : \
    Form(shrub.getName(), shrub.getSignGrade(), shrub.getExecGrade(), shrub.getTarget()) {
    std::cout << "Shrub copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "Shrub destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    check_execute(executor);
    std::string file_name = (getTarget() + "_shrubbery");
    std::ofstream outfile (file_name);
    outfile << "A gigantic ascii table ....." << std::endl;
    outfile.close();
}
