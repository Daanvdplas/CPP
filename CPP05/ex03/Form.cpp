#include "Form.hpp"
#include "Bureaucrat.hpp"

const char *Form::NotSignedException::what() const throw () {
    return "the form is not signed";
}

const char *Form::GradeTooHighException::what() const throw () {
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw (){
    return "Grade too low";
}

int Form::check_grade(int grade) {
    if (grade < 1)
        throw Form::GradeTooHighException();
    if (grade > 150)
        throw Form::GradeTooLowException();
    return grade;
}

void check_sign_grade(int s_grade, int b_grade) {
    if (b_grade > s_grade)
        throw Form::GradeTooLowException();
}

Form::Form(const std::string name, int s_grade, int e_grade, std::string target) \
        : _name(name), _signed(false), _sign_grade(check_grade(s_grade)), \
        _exec_grade(check_grade(e_grade)), _target(target) {
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(const Form &form) : _name(form._name), _signed(false), \
_sign_grade(form._sign_grade), _exec_grade(form._exec_grade) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &form) {
    //assignment operator and const attributes are mandatory; not possible
    //_name = form._name;
    _signed = form._signed;
    return (*this);
}

std::string Form::getName(void) const {
    return _name;
}

bool Form::getSign(void) const {
    return _signed;
}

int Form::getSignGrade(void) const {
    return _sign_grade;
}

int Form::getExecGrade(void) const {
    return _exec_grade;
}

std::string Form::getTarget(void) const {
    return _target;
}

void Form::beSigned(Bureaucrat bureaucrat) {
    check_sign_grade(_sign_grade, bureaucrat.getGrade());
    _signed = true;
}

void Form::check_execute(const Bureaucrat &executor) const {
    if (!getSign())
        throw Form::NotSignedException();
    if (executor.getGrade() > _exec_grade)
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << form.getName() << " (" << form.getSign() << ") "
        << ", form sign grade: " << form.getSignGrade() 
        << ", execute grade: " << form.getExecGrade() << " and target name: "
        << form.getTarget();
    return out;
}

Form::~Form(void) {
    std::cout << "Form destructor called" << std::endl;
}
