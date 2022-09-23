/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:19:44 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 20:46:59 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &rhs);
		Intern &operator=(const Intern &rhs);
		virtual ~Intern();

		Form *makeForm(const std::string &name, const std::string &target);
		
		struct WrongNameException : public std::exception
		{
			virtual const char *what() const throw();
		};
		
	private:
		
		Form *makeShrubberyCreationForm(const std::string &target) const;
		Form *makeRobotomyRequestForm(const std::string& target) const;
		Form *makePresidentialPardonForm(const std::string& target) const;
		
};