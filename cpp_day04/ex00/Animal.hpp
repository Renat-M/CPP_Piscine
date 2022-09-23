/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:40:54 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 17:04:43 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	public:
		
		Animal();
		Animal(const Animal &rhs);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();
		
		virtual void makeSound() const;
		
		const std::string &getType() const;
		
	protected:
		std::string _type;
};

std::ostream &operator<<(std::ostream &out, const Animal &rhs);