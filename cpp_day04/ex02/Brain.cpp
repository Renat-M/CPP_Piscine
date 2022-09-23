/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:04:04 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 19:27:14 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "default idea";
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

void Brain::setIdea(const unsigned int &i, const std::string &idea)
{
	_ideas[i % 100] = idea;
}

const std::string &Brain::getIdea(const unsigned int &i) const
{
	return (_ideas[i % 100]);
}