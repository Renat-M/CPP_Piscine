/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.school21.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:16:54 by meourea           #+#    #+#             */
/*   Updated: 2022/05/09 18:15:11 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *arr;
	arr = zombieHorde(5, "Alyosha");
	arr[3].announce();
	delete[] arr;
	return 0;
}