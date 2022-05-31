#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw () {
    return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw (){
    return "Grade too low";
}

static void checkgrade(int grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    checkgrade(grade);
    _grade = grade;
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
    _name = bureaucrat._name;
    _grade = bureaucrat._grade;
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    _name = bureaucrat._name;
    _grade = bureaucrat._grade;
    return (*this);
}

std::string Bureaucrat::getName(void) const {
    return _name;
}

int Bureaucrat::getGrade(void) const {
    return _grade;
}

void Bureaucrat::incrementGrade(void) {
    checkgrade(_grade - 1);
    _grade--;
}

void Bureaucrat::decrementGrade(void) {
    checkgrade(_grade + 1);
    _grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade "
        << bureaucrat.getGrade();
    return out;
}

Bureaucrat::~Bureaucrat(void) {
    std::cout << "Destructor called" << std::endl;
}
