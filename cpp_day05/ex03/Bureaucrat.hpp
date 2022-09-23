/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:48:34 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 14:54:33 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

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

		void signForm(Form &form) const;
		void executeForm(Form const &form) const;

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