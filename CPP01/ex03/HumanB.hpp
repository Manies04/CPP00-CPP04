/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 23:44:42 by tiade-al          #+#    #+#             */
/*   Updated: 2026/01/10 00:02:10 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
	std::string _name;
	Weapon* _weapon;
	public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void setWeapon(Weapon& weapon);
};

#endif