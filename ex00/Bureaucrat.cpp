/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:54:07 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/24 18:59:34 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// !Need to include a simple, default Bureaucrat() too?
Bureaucrat::Bureaucrat(std::string const name, int grade) {}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bureaucrat) {}

std::string const &Bureaucrat::getName() const {}

int Bureaucrat::getGrade() const {}

void Bureaucrat::incrementGrade() {}

void Bureaucrat::decrementGrade() {}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {}
