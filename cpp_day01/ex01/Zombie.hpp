/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.school21.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:16:20 by meourea           #+#    #+#             */
/*   Updated: 2022/05/09 18:01:08 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		void set_name(std::string name);
		void announce( void );
		~Zombie();
	private:
		std::string _name;
};

Zombie*    zombieHorde( int N, std::string name );