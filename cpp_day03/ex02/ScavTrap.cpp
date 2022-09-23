/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 22:49:37 by meourea           #+#    #+#             */
/*   Updated: 2022/05/19 00:09:04 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "DefaultScav";
	_hitPoints = 100;
    _energyPoints = 50;
    _attackDmg = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDmg = 20;
    std::cout << "ScavTrap parameter constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
    *this = rhs;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        std::cout << "ScavTrap " << _name << " attacks " << target <<
        ", causing " << _attackDmg << " points of damage!" << std::endl;
        _energyPoints--;
        return;
    }
    if (_hitPoints == 0)
        std::cout << "ScavTrap " << _name << " has no hit points for attack!" << std::endl;
    else
        std::cout << "ScavTrap " << _name << " has no energy points for attack!" << std::endl;
}

void ScavTrap::guardGate()
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
        return ;
    }
    if (_hitPoints == 0)
        std::cout << _name << " has no hit points for gate keeping!" << std::endl;
    else
        std::cout << _name << " has no energy points for gate keeping!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ScavTrap &rhs)
{
    out << "ScavTrap " << rhs.getName() << " has " <<
    rhs.getHitPoints() << " hit points and " <<
    rhs.getEnergyPoints() << " energy points and gives " <<
    rhs.getAttackDamage() << " attack damage!";
    return out;
}