#pragma once

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(Intern const &);
		Intern &operator=(Intern const &);
		~Intern();

		Form    *makeForm(std::string const &name_of_form, std::string const &target);

		struct Templates {
			std::string         form_name;
			Form                *(*create_form)(std::string const &target);
		};
	private:
		Templates   **_templates;
		int const   _num_of_temp;
};