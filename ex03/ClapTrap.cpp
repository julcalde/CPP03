/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:05:45 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/19 13:23:01 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10),_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
: _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << _name << " copy constructor called!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " assignment operator= called!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " can't attack: no HP or EP left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " 
			  << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << "'s HP already depleted!" << std::endl;
		return ;
	}
	_hitPoints = (amount >= _hitPoints) ? 0 : _hitPoints - amount;
	std::cout << "ClapTrap " << _name << " lost " << amount << " HP. Remaining HP: "
	<< _hitPoints << "!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " cannot be repaired: no HP or EP left!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " restored " << amount << " HP. Current HP: "
	<< _hitPoints << "!" << std::endl;
}

std::string ClapTrap::getName() const
{
	return _name;
}
