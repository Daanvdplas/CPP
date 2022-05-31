#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>

class   Bureaucrat;

class   Form {
    public:
        Form(const std::string name, int s_grade, int e_grade);
        virtual ~Form(void);
        Form(const Form &bureaucrat);
        Form &operator=(const Form &bureaucrat);

        std::string getName(void) const;
        int getExecGrade(void) const;
        int getSignGrade(void) const;
        bool getSign(void) const;

        void beSigned(Bureaucrat bureaucrat);
        void incrementGrade(void);
        void decrementGrade(void);
        class GradeTooHighException : public std::exception {
            const char *what() const throw ();
        };
        class GradeTooLowException : public std::exception {
            const char *what() const throw ();
        };
    private:
        const std::string _name;
        bool _signed;
        const int _sign_grade;
        const int _exec_grade;
        int check_grade(int grade);

};

std::ostream &operator<<(std::ostream &out, const Form &b);
#endif
