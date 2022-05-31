#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class   Bureaucrat;

class   ShrubberyCreationForm : public Form {
    public:
        ShrubberyCreationForm(const std::string target);
        virtual ~ShrubberyCreationForm(void);
        ShrubberyCreationForm(const ShrubberyCreationForm &shrub);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shrub);
        void execute(const Bureaucrat &executor) const;
};

#endif
