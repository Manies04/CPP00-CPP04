/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:47:43 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/09 23:10:32 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("unknown"), _hp(10), _ep(10), _attack_damage(0)
{
		std::cout << "ClapTrap Default Constructor called for [" << _name << "]" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name),
	_hp(other._hp), _ep(other._ep), _attack_damage(other._attack_damage)
{
	std::cout << "ClapTrap Copy constructor called for [" << _name << "]" << std::endl;
}
ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called for [" << _name << "]" << std::endl;
}

ClapTrap::ClapTrap(t_string name): _name(name), _hp(10), _ep(10), _attack_damage(0)
{
	std::cout << "ClapTrap name Constructor has been called for [" << _name << "]" << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap Assignment operator called for [" << _name << "]" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hp = other._hp;
		this->_ep = other._ep;
		this->_attack_damage = other._attack_damage;
	}
	return *this;
}
void ClapTrap::attack(const std::string& target)
{
	if (_hp < 1)
	{
		std::cout << "ClapTrap " << _name << " Is Dead!" << std::endl;
		return;
	}
	if (_ep < 1)
	{
		std::cout << "ClapTrap " << _name << " Has No Energy!" << std::endl;
		return;
	}
	_ep--;
	std::cout << "ClapTrap " << _name << " Just Attacked " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp < 1)
	{
		std::cout << "ClapTrap " << _name << " Is Already Dead, No Need To Hit On The Dead" << std::endl;
		return;
	}
	_hp -= amount;
	std::cout << "ClapTrap " << _name << " Took " << amount << " Points Of Damage!" << std::endl;
	if (_hp < 1)
	{
		std::cout << "ClapTrap " << _name << " Just Died!" << std::endl;
		_hp = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp < 1)
	{
		std::cout << "ClapTrap " << _name << " Is Already Dead, You Need a More Powerful Spell Than That!" << std::endl;
		return;
	}
	if (_ep < 1)
	{
		std::cout << "ClapTrap " << _name << " Needs an Energy Drink!" << std::endl;
		return;
	}
	_ep--;
	_hp += amount;
	std::cout << "ClapTrap " << _name << " Got Repaired And Is Now At " << _hp << "HP" << std::endl;
	}
