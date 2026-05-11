/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:44:48 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/10 00:07:42 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
	std::cout << "=== TEST 1: Construction/Destruction Chaining ===" << std::endl;
	{
		ScavTrap scav("Serena");
	}
 
	std::cout << std::endl;
 
	std::cout << "=== TEST 2: ScavTrap Attack & Inherited Methods ===" << std::endl;
	{
		ScavTrap scav("Serena");
		ClapTrap clap("ClappyBoi");
 
		scav.attack("ClappyBoi");
		clap.attack("Serena");
 
		scav.takeDamage(30);
		scav.beRepaired(15);
	}
 
	std::cout << std::endl;
 
	std::cout << "=== TEST 3: guardGate Special Ability ===" << std::endl;
	{
		ScavTrap gatekeeper("GK-9000");
		gatekeeper.guardGate();
	}
 
	std::cout << std::endl;
 
	std::cout << "=== TEST 4: Copy Constructor ===" << std::endl;
	{
		ScavTrap original("Original");
		ScavTrap copy(original);
		copy.attack("something");
	}
 
	std::cout << std::endl;
 
	std::cout << "=== TEST 5: Edge Cases (dead robot) ===" << std::endl;
	{
		ScavTrap dead("DeadBot");
		dead.takeDamage(999);
		dead.attack("anyone");
		dead.beRepaired(10);
	}
 
	return 0;
}