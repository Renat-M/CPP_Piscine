/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:45:04 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 17:03:45 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		virtual ~ShrubberyCreationForm();
		
		virtual void execute(const Bureaucrat &executer) const;
		
	private:
	
		ShrubberyCreationForm();
		
		std::string _target;
		
};