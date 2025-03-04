/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:43:03 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/04 11:43:55 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : \
_name("PFF"), _isSigned(false), _signGrade(25), _executeGrade(5), _target("None") {
	std::cout << "PFF created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PFF destroyed" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : \
AForm(), _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _executeGrade(other._executeGrade), _target(other._target) {
	*this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	(void)other;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : \
_name("PFF"), _isSigned(false), _signGrade(25), _executeGrade(5), _target(target) {
	std::cout << "PFF created" << std::endl;
}

void execute(Bureaucrat const &executor) {
	std::cout << "PFF executed by " << executor << std::endl;
}
