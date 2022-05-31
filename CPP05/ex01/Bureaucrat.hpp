#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>

class   Form;

class   Bureaucrat {
    public:
        Bureaucrat(const std::string name, int grade);
        virtual ~Bureaucrat(void);
        Bureaucrat(const Bureaucrat &bureaucrat);
        Bureaucrat &operator=(const Bureaucrat &bureaucrat);
        void signForm(Form &f);
        std::string getName(void) const;
        int getGrade(void) const;
        void incrementGrade(void);
        void decrementGrade(void);
        class GradeTooHighException : public std::exception {
            const char *what() const throw ();
        };
        class GradeTooLowException : public std::exception {
            const char *what() const throw ();
        };
    private:
        std::string _name;
        int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
#endif
