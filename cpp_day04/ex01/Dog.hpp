/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:10:28 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 19:42:11 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
	
		Dog();
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		~Dog();
		void makeSound() const;

		void setIdea(const unsigned int &i, const std::string &idea);
		const std::string &getIdea(const unsigned int &i) const;
		
	private:
		
		Brain *_brain;
};

std::ostream &operator<<(std::ostream &out, const Dog &rhs);
