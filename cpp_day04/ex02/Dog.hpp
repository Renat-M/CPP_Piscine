/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:10:28 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 21:52:05 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
