/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:47:04 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 16:28:39 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
		virtual ~PresidentialPardonForm();
		
		void execute(const Bureaucrat &executer) const;
		
	private:
		
		PresidentialPardonForm();
		std::string _target;
};