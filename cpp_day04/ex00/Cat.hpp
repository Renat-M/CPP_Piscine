/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:27:28 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 17:29:04 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	
		Cat();
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		~Cat();
		void makeSound() const;
		
	private:
	
};

std::ostream &operator<<(std::ostream &out, const Cat &rhs);
