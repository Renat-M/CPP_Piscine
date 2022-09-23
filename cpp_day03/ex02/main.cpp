/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:04:38 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 01:05:27 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap c("Clap");
    FragTrap f("Frag");
    FragTrap g(f);
    ScavTrap s("Scav");

    std::cout << c << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << s << std::endl;

    c.attack("ABOBA");
    f.attack("ABOBA");
    s.attack("ABOBA");

    f.highFivesGuys();
    s.guardGate();

    std::cout << c << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << s << std::endl;

    return 0;
}
