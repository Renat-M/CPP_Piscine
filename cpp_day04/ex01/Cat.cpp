/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:27:19 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 21:13:04 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor" << std::endl;
	_type = "Cat";
	_brain = new Brain();
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
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
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

void Cat::setIdea(const unsigned int &i, const std::string &idea) {
    _brain->setIdea(i, idea);
}

const std::string &Cat::getIdea(const unsigned int &i) const {
    return _brain->getIdea(i);
}