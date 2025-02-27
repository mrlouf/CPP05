/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:55:59 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/27 14:36:05 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	
	{
		Bureaucrat H = Bureaucrat("Hugo", 10);
		Form F;
		try {H.signForm(F);}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
		std::cout << e.what() << std::endl;
		}
		std::cout << F.getIsSigned() << std::endl;
	}
	{
		std::cout << std::endl;
		Bureaucrat H = Bureaucrat("Hugo", 150);
		Form F;
		try {H.signForm(F);}
		catch (const Form::GradeTooLowException &e)
		{
		std::cout << e.what() << std::endl;
		}
		std::cout << F.getIsSigned() << std::endl;
	}

	return (0);
}
