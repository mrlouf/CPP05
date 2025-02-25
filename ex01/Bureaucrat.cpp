/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:54:07 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/25 09:38:31 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
	std::cout << "One more Bureaucrat in this world" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	std::cout << "Bureaucrat " << name << " created" << std::endl;
	if (grade > 150)
		_grade = 150;
	else if (grade < 1)
		_grade = 1;
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) : _name(bureaucrat.getName()), _grade(bureaucrat.getGrade()) {
	std::cout << "Bureaucrat " << _name << " copied" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << _name << " destroyed" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat) {
	std::cout << "Assignment operator called" << std::endl;
	if (this != &bureaucrat) {
		_grade = bureaucrat._grade;
	}
	return *this;
}

std::string const &Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() {
	try
	{
		if (_grade > 1)
			_grade--;
		else
			throw GradeTooHighException();
	}
	catch (const GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade() {
	try
	{
		if (_grade < 150)
			_grade++;
		else
			throw GradeTooLowException();
	}
	catch (const GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	out << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high to be incremented";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low to be decremented";
}
