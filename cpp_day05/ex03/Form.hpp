/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:27:47 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 16:11:58 by meourea          ###   ########.fr       */
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
		
		void beSigned(const Bureaucrat &signer);
		virtual void execute(Bureaucrat const &executor) const = 0;
		
		struct GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};
		
		struct GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

		struct FormNotSignedException: public std::exception
		{
			virtual const char *what() const throw();
		};
	
	protected:
	
		Form();	

	private:
	
		const std::string _name;
		bool _isSigned;
		const int _signGrade;
		const int _execGrade;
		
};

std::ostream &operator<<(std::ostream &out, const Form &rhs);
