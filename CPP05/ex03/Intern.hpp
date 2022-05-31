#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include "Form.hpp"

class   Intern {
    public:
        Intern(void);
		virtual ~Intern();
		Intern(const Intern &intern);
		Intern &operator=(const Intern &intern);
        Form *makeForm(std::string name, std::string target);
};

#endif
