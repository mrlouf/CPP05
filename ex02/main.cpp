/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:55:59 by nponchon          #+#    #+#             */
/*   Updated: 2025/03/05 14:24:29 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main() {
	
	{
		std::cout << "\033[1;31mTest with grade too low to sign, execute\033[0m" << std::endl;
		try {
			Bureaucrat H = Bureaucrat("Hugo", 150);
			PresidentialPardonForm PFF = PresidentialPardonForm("target");
			H.signForm(PFF);
			std::cout << "Jumps to the catch and skips the rest" << std::endl;
			PFF.execute(H);
		} catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[1;31mTest with grade too low to execute\033[0m" << std::endl;
		try {
			Bureaucrat H = Bureaucrat("Hugo", 15);
			PresidentialPardonForm PFF = PresidentialPardonForm("target");
			H.signForm(PFF);
			PFF.execute(H);
		} catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[1;31mTest executing PFF\033[0m" << std::endl;
		try {
			Bureaucrat H = Bureaucrat("Hugo", 1);
			PresidentialPardonForm PFF = PresidentialPardonForm("Oktorok");
			H.signForm(PFF);
			PFF.execute(H);
		} catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[1;31mTest Robotomy\033[0m" << std::endl;
		try {
			Bureaucrat H = Bureaucrat("Hugo", 1);
			RobotomyRequestForm RRF("Oktorok");
			H.signForm(RRF);
			RRF.execute(H);
		} catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "\033[1;31mTest Shrubbery\033[0m" << std::endl;
		try {
			Bureaucrat H = Bureaucrat("Hugo", 1);
			ShrubberyCreationForm SCF("Oktorok");
			H.signForm(SCF);
			SCF.execute(H);
		} catch (const std::exception &e) {
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
	}
	return (0);
}
