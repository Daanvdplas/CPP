#ifndef PRESIDENTIALFORM_HPP
#define PRESIDENTIALFORM_HPP
#include "Form.hpp"

class   Bureaucrat;

class   PresidentialPardonForm : public Form {
    public:
        PresidentialPardonForm(const std::string name);
        virtual ~PresidentialPardonForm(void);
        PresidentialPardonForm(const PresidentialPardonForm &pres);
        using Form::operator=;
        void execute(const Bureaucrat &executor) const;
};

#endif
