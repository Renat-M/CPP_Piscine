/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 02:40:46 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 21:50:05 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	std::cout << "AAnimal copy constructor" << std::endl;
    *this = rhs;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
    if (this == &rhs)
        return *this;
    _type = rhs._type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor" << std::endl;
}

const std::string& AAnimal::getType() const
{
    return _type;
}

std::ostream &operator<<(std::ostream &out, const AAnimal &rhs)
{
    out << rhs.getType();
    return out;
}