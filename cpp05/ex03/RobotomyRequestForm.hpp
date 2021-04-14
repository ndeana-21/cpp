#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &);
		virtual ~RobotomyRequestForm();

		void        formFunction() const;
};