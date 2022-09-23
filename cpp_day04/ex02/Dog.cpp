/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:15:45 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 21:15:23 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "GAV GAV" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Dog &rhs)
{
	out << rhs.getType();
	return (out);
}

void Dog::setIdea(const unsigned int &i, const std::string &idea)
{
    _brain->setIdea(i, idea);
}

const std::string &Dog::getIdea(const unsigned int &i) const
{
    return _brain->getIdea(i);
}