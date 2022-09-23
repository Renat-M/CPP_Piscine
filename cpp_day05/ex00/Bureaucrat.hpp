/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:48:34 by meourea           #+#    #+#             */
/*   Updated: 2022/05/28 15:02:15 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	public:
	
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		virtual ~Bureaucrat();
		
		const std::string &getName() const;
    	const int &getGrade() const;

    	void incrementGrade();
    	void decrementGrade();

		struct GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		
		struct GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		
	private:
		
		Bureaucrat();
		const std::string _name;
    	int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

class Bureaucrat
{
private:
	
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator=(const Bureaucrat &copy);
	~Bureaucrat();
	
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	
}

Bureaucrat::Bureaucrat()
{
	
}

Bureaucrat::~Bureaucrat()
{
	
}