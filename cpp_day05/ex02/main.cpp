/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:47:45 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 19:23:57 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    Form *form[3];
    Bureaucrat *bureaucrat[3];

    try
	{
        form[0] = new ShrubberyCreationForm("Garden");
        form[1] = new RobotomyRequestForm("Fridge");
        form[2] = new PresidentialPardonForm("Zel");

        for (int i = 0; i < 3; i++)
            std::cout << *(form[i]) << std::endl;

        std::cout << std::endl;

        bureaucrat[0] = new Bureaucrat("Billy", 137);
        bureaucrat[1] = new Bureaucrat("Willy", 45);
        bureaucrat[2] = new Bureaucrat("Dilly", 6);

        for (int i = 0; i < 3; i++)
            std::cout << *(bureaucrat[i]) << std::endl;

        std::cout << std::endl;

        int f = 0;
        int bSign = 0;
        int bExec = 0;

        while (f < 3)
		{
            try
			{
                bureaucrat[bExec]->executeForm(*(form[f]));
                f++;
                std::cout << std::endl;
            }
            catch (Form::FormNotSignedException &e)
			{
                std::cout << form[f]->getName() << ": " << e.what() << std::endl;
                try
				{
                    bureaucrat[bSign]->signForm(*(form[f]));
                }
                catch (std::exception &e)
				{
                    std::cout << *(bureaucrat[bSign]) << ": " << e.what() << std::endl;
                    if (bSign < 2)
                        bSign++;
                    else
                        bureaucrat[bSign]->incrementGrade();
                }

            }
            catch (std::exception &e)
			{
                std::cout << form[f]->getName() << ", " << bureaucrat[bExec]->getName() << ": " << e.what() << std::endl;
                if (bExec < 2)
                    bExec++;
				else
                    bureaucrat[bExec]->incrementGrade();
            }
        }

        for (int i = 0; i < 10; i++)
		{
            bureaucrat[2]->executeForm(*(form[1]));
            std::cout << " " << std::endl;
        }

        for (int i = 0; i < 3; ++i)
            delete form[i];
        for (int i = 0; i < 3; ++i)
            delete bureaucrat[i];
    }
    catch (std::exception &e)
	{
        std::cout << "Constructor error: " << e.what() << std::endl;
    }

    return 0;
}
