/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 23:29:48 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/10 00:16:20 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hp = 100;
	_ep = 100;
	_attack_damage = 30;
	std::cout << "FragTrap Default Constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_attack_damage = 30;
	std::cout << "FragTrap name Constructor has been called for [" << _name << "]" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap Copy Constructor has been called for [" << _name << "]" << std:: endl;
}

FragTrap &FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap Assignement Operator has been called for [" << _name << "]" << std:: endl;
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_attack_damage = other._attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called for [" << _name << "]" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_hp < 1)
	{
		std::cout << "FragTrap " << _name << " Is Dead!" << std::endl;
		return;
	}
	if (_ep < 1)
	{
		std::cout << "FragTrap " << _name << " Has No Energy!" << std::endl;
		return;
	}
	_ep--;
	std::cout << "FragTrap " << _name << " Just Attacked " << target << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (_hp < 1)
	{
		std::cout << "FragTrap [" << _name << "] is dead and cannot high five..." << std::endl;
		return;
	}
	std::cout << "FragTrap [" << _name << "] requested a high five!" << std::endl;
}