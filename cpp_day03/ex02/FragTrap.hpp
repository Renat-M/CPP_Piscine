/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:37:32 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 00:57:57 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &rhs);
		FragTrap &operator=(const FragTrap &rhs);
		~FragTrap();
		
		void attack(const std::string &target);
		void highFivesGuys();
		
	private:	
};

std::ostream &operator<<(std::ostream &out, const FragTrap &rhs);
