/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.school21.ru>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:56:56 by meourea           #+#    #+#             */
/*   Updated: 2022/05/09 17:09:50 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "Zombie " << _name << " was created." << std::endl;
}

Zombie::Zombie()
{
	_name = "default";
	std::cout << "Zombie " << _name << " was created." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " was killed." << std::endl;
}

