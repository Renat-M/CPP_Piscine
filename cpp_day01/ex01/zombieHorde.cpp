/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.school21.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:15:28 by meourea           #+#    #+#             */
/*   Updated: 2022/05/09 18:03:46 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	std::string name_tmp;
	Zombie *ptr = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		name_tmp = name + '_' + std::to_string(i);
		ptr[i].set_name(name_tmp);
	}
	return (ptr);
}
