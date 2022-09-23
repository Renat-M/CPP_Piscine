/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:05:07 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 18:06:52 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
    *this = rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I'm just an WrongAnimal" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return _type;
}

std::ostream &operator<<(std::ostream &out, const WrongAnimal &rhs)
{
    out << rhs.getType();
    return out;
}