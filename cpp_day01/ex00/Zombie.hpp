/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.school21.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:56:36 by meourea           #+#    #+#             */
/*   Updated: 2022/05/09 16:42:51 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		void announce( void );
		~Zombie();
	private:
		std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
