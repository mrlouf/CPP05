/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:03:04 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/05 14:36:15 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : \
_name("SCF"), _isSigned(false), _signGrade(72), _executeGrade(45), _target("None") {
	std::cout << "SCF created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "SCF destroyed" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : \
AForm(), _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade), _target(other._target) {
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	(void)other;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : \
_name("RRF"), _isSigned(false), _signGrade(25), _executeGrade(5), _target(target) {
	std::cout << "RRF created" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() <= getExecuteGrade()) {
		std::string name = _target + "_shrubbery";
		std::ofstream shrubbery(name.c_str());

        shrubbery << "       ^\n";
        shrubbery << "      ^^^\n";
        shrubbery << "     ^^^^^\n";
        shrubbery << "    ^^^^^^^\n";
        shrubbery << "   ^^^^^^^^^\n";
        shrubbery << "  ^^^^^^^^^^^\n";
        shrubbery << "       ||\n";
        shrubbery << "       ||\n";

		shrubbery.close();
	}
	else
		throw GradeTooLowException();
}
