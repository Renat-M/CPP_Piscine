/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:27:47 by meourea           #+#    #+#             */
/*   Updated: 2022/05/22 20:58:11 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public:

		Form(const std::string &name, const int &signGrade, const int &execGrade);
		Form(const Form &rhs);
		Form &operator=(const Form &rhs);
		virtual ~Form();
		
		const std::string &getName() const;
		const bool &getIsSigned() const;
		const int &getSignGrade() const;
		const int &getExecGrade() const;
		
		void beSigned(const Bureaucrat &rhs);
		
		struct GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		
		struct GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};
		
	private:
	
		Form();
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;
		
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);
