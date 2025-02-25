/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 09:48:45 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/25 09:59:28 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <ostream>
# include <iostream>

class Bureaucrat;

class Form {
	private:
		const std::string		_name;
		bool					_isSigned;
		const int				_signGrade;
		const int				_executeGrade;		
	public:
		Form();
		Form(const Form &other);
		Form &operator=(const Form &other) const;
		~Form();

		std::string const &getName() const;
		bool getIsSigned();
		int getSignGrade() const;
		int getExecuteGrade() const;

		void beSigned(const Bureaucrat &b);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

};

#endif

/*
The grades of the Form follow the same rules that apply to the Bureaucrat. Thus,
the following exceptions will be thrown if a form grade is out of bounds:
Form::GradeTooHighException and Form::GradeTooLowException.

Same as before, write getters for all attributes and an overload of the insertion («)
operator that prints all the form’s informations.

Add also a beSigned() member function to the Form that takes a Bureaucrat as
parameter. It changes the form status to signed if the bureaucrat’s grade is high enough
(higher or egal to the required one). Remember, grade 1 is higher than grade 2.
If the grade is too low, throw a Form::GradeTooLowException.

Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
it will print something like:
<bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.
*/