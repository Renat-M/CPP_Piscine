/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:47:45 by meourea           #+#    #+#             */
/*   Updated: 2022/05/21 20:11:00 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat Lupa("Lupa", 2);
		Bureaucrat Pupa("Pupa", 150);
		try
		{
			std::cout << "----------------------------\n";

		
			std::cout << Lupa << std::endl;
			std::cout << Pupa << std::endl;
			Pupa = Lupa;
			std::cout << Pupa << std::endl;
			Lupa.incrementGrade();
			std::cout << Lupa << std::endl;
			Pupa.decrementGrade();
			std::cout << Pupa << std::endl;
		}
		catch (std::exception &ex1)
		{
			std::cout << ex1.what() << std::endl;
		}
		std::cout << "----------------------------\n";

		std::cout << Lupa << std::endl;
	}
	try
	{
		std::cout << "----------------------------\n";

		Bureaucrat Lupa("Lupa", 0);
		std::cout << Lupa << std::endl;
		Bureaucrat Pupa("Pupa", 150);
		std::cout << Pupa << std::endl;
		Pupa = Lupa;
		std::cout << Pupa << std::endl;
		Lupa.incrementGrade();
		std::cout << Lupa << std::endl;
		Pupa.decrementGrade();
	}
	catch (std::exception &ex1)
	{
		std::cout << ex1.what() << std::endl;
	}
	try
	{
		std::cout << "----------------------------\n";

		Bureaucrat Lupa("Lupa", 1);
		std::cout << Lupa << std::endl;
		Bureaucrat Pupa("Pupa", 5);
		std::cout << Pupa << std::endl;
		Pupa = Lupa;
		std::cout << Pupa << std::endl;
		while (1)
		{
			Pupa.decrementGrade();
			std::cout << Pupa << std::endl;
		}
		Lupa.incrementGrade();
		std::cout << Lupa << std::endl;
	}
	catch (std::exception &ex1)
	{
		std::cout << ex1.what() << std::endl;
	}
	return 0;
}
