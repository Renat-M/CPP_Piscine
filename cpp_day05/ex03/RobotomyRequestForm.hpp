/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:45:59 by meourea           #+#    #+#             */
/*   Updated: 2022/05/23 16:32:26 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
	
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		virtual ~RobotomyRequestForm();

		void execute(const Bureaucrat &executer) const;
	
	private:
		
		RobotomyRequestForm();

		std::string _target;
};

