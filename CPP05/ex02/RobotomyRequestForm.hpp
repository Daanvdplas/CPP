#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class   Bureaucrat;

class   RobotomyRequestForm : public Form {
    public:
        RobotomyRequestForm(const std::string name);
        virtual ~RobotomyRequestForm(void);
        RobotomyRequestForm(const RobotomyRequestForm &robot);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &robot);
        void execute(const Bureaucrat &executor) const;
};

#endif
