/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:10:28 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 17:14:23 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
	
		Dog();
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		~Dog();
		void makeSound() const;
		
	private:
	
};

std::ostream &operator<<(std::ostream &out, const Dog &rhs);
