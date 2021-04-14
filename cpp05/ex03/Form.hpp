#pragma once

class Bureaucrat;

# include "Bureaucrat.hpp"

class Form {
	public:
		Form(std::string name, int sign, int execute);
		Form(Form const &other);
		virtual ~Form();

		Form &operator=(Form const &other);

		class GradeTooHighException: public std::exception {
			const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			const char* what() const throw();
		};
		class FormIsNotSigned : public std::exception {
			const char* what() const throw();
		};

		std::string			getName() const;
		int					getNumSign() const;
		int					getNumExecute() const;
		bool				getSigned(void) const;
		const std::string	&getTarget() const;		

		void		setTarget(const std::string &target);


		void				beSigned(Bureaucrat const &base);
		void				execute(Bureaucrat const & executor) const;
		virtual void		formFunction() const = 0;
	private:
		Form();

		std::string	_name;
		bool		_sign;
		int			_num_sign;
		int			_num_execute;
		std::string	_target;
};

std::ostream &operator<<(std::ostream &os, Form const &base);