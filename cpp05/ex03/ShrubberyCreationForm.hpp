#pragma once

#include "Form.hpp"
#include <string>

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
		virtual ~ShrubberyCreationForm();

		void        formFunction() const;
};