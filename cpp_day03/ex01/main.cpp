/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:48:13 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 00:02:54 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Alyosha");
    ScavTrap b("Boris");

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    b.attack("Gorynych");
    a.guardGate();
    b.takeDamage(35);
    a.beRepaired(100);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}
