/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:27:28 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 21:52:00 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
	
		Cat();
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		~Cat();
		void makeSound() const;

		void setIdea(const unsigned int &i, const std::string &idea);
		const std::string &getIdea(const unsigned int &i) const;
		
	private:

		Brain *_brain;
};

std::ostream &operator<<(std::ostream &out, const Cat &rhs);
