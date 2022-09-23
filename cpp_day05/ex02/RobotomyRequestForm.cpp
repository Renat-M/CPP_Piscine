/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:46:39 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 16:43:02 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : \
Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : \
Form(rhs.getName(), rhs.getSignGrade(), rhs.getExecGrade())
{
	*this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this == &rhs)
		return (*this);
	_target = rhs._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat &executer) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (getExecGrade() < executer.getGrade())
		throw GradeTooLowException();
	std::cout << "* some drilling noises *" << std::endl;
	if (std::rand() % 2)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;
}