/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:01:00 by meourea           #+#    #+#             */
/*   Updated: 2022/05/26 20:19:06 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

class Test
{
	public:
		Test(): _n(21) {}
		const int &get() const { return(_n); }
	private:
		int _n;
};

std::ostream &operator<<(std::ostream &out, const Test &rhs) {out << rhs.get(); return out; }


template<typename T>
void print(const T &x)
{
	std::cout << x << std::endl;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, print);

	std::string str[] = {"One", "Two", "Three", "Four", "Five"};
	iter(str, 5, print);
	
	Test aboba[5];
	iter(aboba, 5, print);
}