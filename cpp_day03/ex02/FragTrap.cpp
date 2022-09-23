/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:37:22 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 01:03:32 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _name = "DefaultFrag";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDmg = 30;
}

FragTrap::FragTrap(const std::string &name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDmg = 30;
    std::cout << "FragTrap parameter constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
    *this = rhs;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        std::cout << "FragTrap " << _name << " attacks " << target <<
        ", causing " << _attackDmg << " points of damage!" << std::endl;
        _energyPoints--;
        return ;
    }
    if (_hitPoints == 0)
        std::cout << "FragTrap " << _name << " has no hit points for attack!" << std::endl;
    else
        std::cout << "FragTrap " << _name << " has no energy points for attack!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        std::cout << "High five guys!" << std::endl;
        return ;
    }
    if (_hitPoints == 0)
        std::cout << _name << " has no hit points for positive request!" << std::endl;
    else
        std::cout << _name << " has no energy points for positive request!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, FragTrap const &rhs){
    out << "FragTrap " << rhs.getName() << " has " <<
    rhs.getHitPoints() << " hit points and " <<
    rhs.getEnergyPoints() << " energy points and gives " <<
    rhs.getAttackDamage() << " attack damage!";
    return out;
}