/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <meourea@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:08:55 by meourea           #+#    #+#             */
/*   Updated: 2022/05/18 23:11:40 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("DefaultClap"), _hitPoints(10), _energyPoints(10), _attackDmg(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : \
_name(name), _hitPoints(10), _energyPoints(10), _attackDmg(0)
{
	std::cout << "ClapTrap parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    _name = rhs.getName();
    _hitPoints = rhs.getHitPoints();
    _energyPoints = rhs.getEnergyPoints();
    _attackDmg = rhs.getAttackDamage();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        std::cout << "ClapTrap " << _name << " attacks " << target <<
        ", causing " << _attackDmg << " points of damage!" << std::endl;
        _energyPoints--;
        return;
    }
    if (_hitPoints == 0)
        std::cout << "ClapTrap " << _name << " has no hit points for attack!" << std::endl;
	else
        std::cout << "ClapTrap " << _name << " has no energy points for attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _hitPoints = amount > _hitPoints ? 0 : _hitPoints - amount;
    std::cout << "ClapTrap " << _name << " took " << amount <<
    " points of damage and has " << _hitPoints << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
	{
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired with " << amount <<
        " points and now has " << _hitPoints << " hit points!" << std::endl;
        _energyPoints--;
        return ;
    }
    if (_hitPoints == 0)
        std::cout << "ClapTrap " << _name << " has no hit points for repair!" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " has no energy points for repair!" << std::endl;
}

const std::string& ClapTrap::getName() const
{
    return _name;
}

const unsigned int& ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

const unsigned int& ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}

const unsigned int& ClapTrap::getAttackDamage() const
{
    return _attackDmg;
}

std::ostream& operator<<(std::ostream &out, ClapTrap const &rhs)
{
    out << "ClapTrap " << rhs.getName() << " has " <<
    rhs.getHitPoints() << " hit points and " <<
    rhs.getEnergyPoints() << " energy points and gives " <<
    rhs.getAttackDamage() << " attack damage!";
    return out;
}