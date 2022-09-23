/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:26:55 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 21:48:30 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern &Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern() {}

const char *Intern::WrongNameException::what() const throw()
{
    return "form name does not exist";
}

Form *Intern::makeShrubberyCreationForm(const std::string &target) const
{
	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomyRequestForm(const std::string& target) const
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidentialPardonForm(const std::string& target) const
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	Form *(Intern::*formMakers[])(const std::string &target) const = {
		formMakers[0] = &Intern::makeShrubberyCreationForm,
		formMakers[1] = &Intern::makeRobotomyRequestForm,
		formMakers[2] = &Intern::makePresidentialPardonForm
	};
	std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*formMakers[i])(target);
		}
	}
	throw Intern::WrongNameException();
}