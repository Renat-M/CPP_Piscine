/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:46:53 by meourea           #+#    #+#             */
/*   Updated: 2022/05/17 21:16:27 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedInt_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	fixedInt_ = val * (1 << numBits_);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	fixedInt_ = roundf(val * (1 << numBits_));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedInt_ = copy.fixedInt_;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->fixedInt_ = other.getRawBits();
	return (*this);
}

float Fixed::toFloat(void) const
{
	return ((float)fixedInt_ / (float)(1 << numBits_));
}

int Fixed::toInt(void) const
{
	return ((int)toFloat());
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixedInt_);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixedInt_ = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool Fixed::operator<(const Fixed &other) const
{
	return (getRawBits() < other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (getRawBits() <= other.getRawBits());
}

bool Fixed::operator>(const Fixed &other) const
{
	return (getRawBits() > other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (getRawBits() >= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (getRawBits() != other.getRawBits());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(getRawBits() - other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits(getRawBits() + other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits((getRawBits() * other.getRawBits()) >> numBits_);
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed tmp;
	tmp.setRawBits((getRawBits() << numBits_) / other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	fixedInt_++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	fixedInt_--;
	return (tmp);
}

Fixed Fixed::operator++()
{
	fixedInt_++;
	return (*this);
}

Fixed Fixed::operator--()
{
	fixedInt_--;
	return (*this);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}