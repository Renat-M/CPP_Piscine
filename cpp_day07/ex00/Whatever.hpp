/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:28:27 by meourea           #+#    #+#             */
/*   Updated: 2022/05/26 18:46:44 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T &max(const T &a, const T &b)
{
	if (a == b)
		return a;
	return (a > b ? a : b);
}

template<typename T>
const T &min(const T &a, const T &b)
{
	if (a == b)
		return a;
	return (a < b ? a : b);
}

class Test
{
	public:
		Test(): _n(0) {}
		Test(int n): _n(n) {}
		Test &operator=(Test &a) {_n = a._n; return *this; }
		bool operator==(Test const &rhs) const {return (this->_n == rhs._n); }
		bool operator!=(Test const &rhs) const {return (this->_n != rhs._n); }
		bool operator>(Test const &rhs) const {return (this->_n > rhs._n); }
		bool operator<(Test const &rhs) const {return (this->_n < rhs._n); }
		bool operator>=(Test const &rhs) const {return (this->_n >= rhs._n); }
		bool operator<=(Test const &rhs) const {return (this->_n <= rhs._n); }
		int get_n() const { return _n; }
	private:
		int _n;
};

std::ostream &operator<<(std::ostream &out, const Test &a) { out << a.get_n(); return out; }