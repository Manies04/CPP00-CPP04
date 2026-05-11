/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:56:10 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/09 23:01:22 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hp = 100;
	_ep = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap Default Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap name Constructor has been called for [" << _name << "]" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Copy Constructor has been called for [" << _name << "]" << std:: endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Assignement Operator has been called for [" << _name << "]" << std:: endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_attack_damage = other._attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for [" << _name << "]" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hp < 1)
	{
		std::cout << "ScavTrap " << _name << " Is Dead!" << std::endl;
		return;
	}
	if (_ep < 1)
	{
		std::cout << "ScavTrap " << _name << " Has No Energy!" << std::endl;
		return;
	}
	_ep--;
	std::cout << "ScavTrap " << _name << " Just Attacked " << target << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}