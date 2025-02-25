/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nponchon <nponchon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:55:59 by nponchon          #+#    #+#             */
/*   Updated: 2025/02/25 09:42:10 by nponchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	
	{
		std::cout << "\033[1;31mTest incrementation limit\033[0m" << std::endl;
		Bureaucrat H("Hugo", 1);
		std::cout << H << std::endl;
		H.incrementGrade();
		std::cout << H << std::endl;
	}
	{
		std::cout << std::endl << "\033[1;31mTest decrementation limit\033[0m" << std::endl;
		Bureaucrat H("Hugo", 150);
		std::cout << H << std::endl;
		H.decrementGrade();
		std::cout << H << std::endl;
	}
	{
		std::cout << std::endl << "\033[1;31mTest assignment\033[0m" << std::endl;
		Bureaucrat H("Hugo", 42);
		std::cout << H << std::endl;
		Bureaucrat N("Nicolas", -61456);
		std::cout << N << std::endl;

		N = H;
		std::cout << N << std::endl;
	}
	{
		std::cout << std::endl << "\033[1;31mTest copy\033[0m" << std::endl;
		Bureaucrat H("Hugo", 42);
		std::cout << H << std::endl;
		Bureaucrat N(H);
		std::cout << N << std::endl;
		H.decrementGrade();
		N.incrementGrade();
		std::cout << H << std::endl;
		std::cout << N << std::endl;
	}

	return (0);
}
