/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:47:45 by meourea           #+#    #+#             */
/*   Updated: 2022/05/22 22:12:39 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() 
{
    {
        try
		{
            Bureaucrat bim("Bim", 100000);
            Bureaucrat bom("Bom", 0);
        }
        catch (std::exception &e)
		{
            std::cout << "Bureaucrat error: " << e.what() << std::endl;
        }
    }

    std::cout << "----------------------------\n";

    {
        try
		{
            Form f("A1", 200, 30);

            std::cout << f << std::endl;
        }
        catch (std::exception &e)
		{
            std::cout << "Form error: " << e.what() << std::endl;
        }
    }

    std::cout << "----------------------------\n";

    {
        Bureaucrat bob("Bob", 90);
        Form a1("A1", 85, 20);

        std::cout << bob << std::endl;
        std::cout << a1 << std::endl;

        std::cout << std::endl;

        while (!a1.getIsSigned())
		{
            try
			{
                bob.signForm(a1);
            }
            catch (std::exception &e)
			{
                std::cout << bob.getName() << " couldn’t sign " << a1.getName() << 
				" because " << e.what() << std::endl;
                bob.incrementGrade();
            }
        }

        std::cout << std::endl;

        std::cout << bob << std::endl;
        std::cout << a1 << std::endl;

        std::cout << std::endl;

        Form a2 = a1;
        Form a3(a2);

        std::cout << "a2: " << a2 << std::endl;
        std::cout << "a3: " << a3 << std::endl;

        bob.decrementGrade();
        std::cout << "decrement: " << bob << std::endl;
	}
    return 0;
}
