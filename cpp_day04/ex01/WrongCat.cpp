/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:09:10 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 18:11:19 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MYAU MYAU" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const WrongCat &rhs)
{
	out << rhs.getType();
	return (out);
}