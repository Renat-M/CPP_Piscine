/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:54:46 by meourea           #+#    #+#             */
/*   Updated: 2022/05/22 21:08:06 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("none"), _signGrade(0), _execGrade(0) {}

Form::Form(const std::string &name, const int &signGrade, const int &execGrade) : _name(name), \
			_signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	_isSigned = false;
}

Form::Form(const Form &rhs) : _name(rhs._name), _signGrade(rhs._signGrade), _execGrade(rhs._execGrade)
{
	*this = rhs;
}

Form &Form::operator=(const Form &rhs)
{
	if (this == &rhs)
		return (*this);
	_isSigned = rhs._isSigned;
	return (*this);
}

Form::~Form() {}

const std::string &Form::getName() const
{
	return (_name);
}

const bool &Form::getIsSigned() const
{
	return (_isSigned);
}

const int &Form::getSignGrade() const
{
	return (_signGrade);
}

const int &Form::getExecGrade() const
{
	return (_execGrade);
}

void Form::beSigned(const Bureaucrat &rhs)
{
	if (_signGrade < rhs.getGrade())
		throw GradeTooLowException();
	_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade is too HIGH!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade is too LOW!");
}

std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
	out << "Form " << rhs.getName() <<
	(rhs.getIsSigned() ? "," : " NOT") << " SIGNED, sign grade: " <<
	rhs.getSignGrade() << ", execution grade: " << rhs.getExecGrade();
	return (out);
}
