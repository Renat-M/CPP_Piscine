/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:40:46 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 17:09:23 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal copy constructor" << std::endl;
    *this = rhs;
}

Animal &Animal::operator=(const Animal &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "I'm just an animal" << std::endl;
}

const std::string& Animal::getType() const
{
    return _type;
}

std::ostream &operator<<(std::ostream &out, const Animal &rhs)
{
    out << rhs.getType();
    return out;
}