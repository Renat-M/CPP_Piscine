/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:27:19 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 17:30:50 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat copy constructor" << std::endl;
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MYAU MYAU" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Cat &rhs)
{
	out << rhs.getType();
	return (out);
}