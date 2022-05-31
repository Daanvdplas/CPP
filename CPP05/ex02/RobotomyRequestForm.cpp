#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target) {
    std::cout << "robot default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robot) : \
    Form(robot.getName(), robot.getSignGrade(), robot.getExecGrade(), robot.getTarget()) {
    std::cout << "robot copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "robot destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    check_execute(executor);
    std::cout << " RRRRRRRRRRRrrrrrrrrrrr " << std::endl;
    std::srand(std::time(NULL));
	if (std::rand() % 2) {
        std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	} else {
		std::cout << getTarget() << " has not been robotomized" << std::endl;
	}
}
