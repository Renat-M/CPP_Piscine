/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:08:44 by meourea           #+#    #+#             */
/*   Updated: 2022/05/18 22:39:20 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Alyosha");
    ClapTrap b("Boris");

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    b.takeDamage(7);

    std::cout << b << std::endl;

    b.beRepaired(2);

    std::cout << b << std::endl;

    b.takeDamage(7);

    std::cout << b << std::endl;

    b.beRepaired(2);

    std::cout << b << std::endl;

    ClapTrap c(b);

    std::cout << c << std::endl;

    for (int i = 0; i < 13; ++i) {
        a.attack("Gorynych");
        std::cout << a << std::endl;
    }
    return 0;
}
