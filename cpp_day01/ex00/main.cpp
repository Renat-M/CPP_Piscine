/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 15:56:24 by meourea           #+#    #+#             */
/*   Updated: 2022/05/10 19:50:17 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << " ---------------------------------- " << std::endl;
	std::cout << " ------- Zombaki na stack --------- " << std::endl;
	std::cout << " ---------------------------------- " << std::endl;
	std::cout << std::endl;

	Zombie stack;
	Zombie stack2("stack2");
	stack.announce();
	stack2.announce();
	
	randomChump("zombie-Chump");
	
	std::cout << std::endl;
	std::cout << " ---------------------------------- " << std::endl;
	std::cout << " ------- Zombaki na heap ---------- " << std::endl;
	std::cout << " ---------------------------------- " << std::endl;
	std::cout << std::endl;
	Zombie *z;
	Zombie *z_tolpa[2];
	
	z = newZombie("zombie-heap");
	z->announce();
	
	z_tolpa[0] = newZombie("zombie-heap2.0");
	z_tolpa[0]->announce();
	z_tolpa[1] = newZombie("zombie-heap2.1");
	z_tolpa[1]->announce();
	
	std::cout << std::endl;
	std::cout << " ---------------------------------- " << std::endl;
	std::cout << " ------- Zombaki pomirayut -------- " << std::endl;
	std::cout << " ---------------------------------- " << std::endl;
	std::cout << std::endl;
	
	delete z;
	for (int i = 0; i < 2; i++)
		delete z_tolpa[i];
	return 0;
}
