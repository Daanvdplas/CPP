#include "Form.hpp"
#include "Bureaucrat.hpp"

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

Form::Form(const std::string name, int s_grade, int e_grade) : _name(name), \
_signed(false), _sign_grade(check_grade(s_grade)), _exec_grade(check_grade(e_grade)) {
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

void Form::beSigned(Bureaucrat bureaucrat) {
    check_sign_grade(_sign_grade, bureaucrat.getGrade());
    _signed = true;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << form.getName() << " (" << form.getSign() << ") "
        << ", form sign grade: " << form.getSignGrade() 
        << " and execute grade: " << form.getExecGrade();
    return out;
}

Form::~Form(void) {
    std::cout << "Form destructor called" << std::endl;
}
