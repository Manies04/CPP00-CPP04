/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:44:48 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/10 00:10:06 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
	std::cout << "=== TEST 1: Construction/Destruction Chaining ===" << std::endl;
	{
		FragTrap frag("Frag");
	}
	std::cout << std::endl;

	std::cout << "=== TEST 2: FragTrap Attack & Inherited Methods ===" << std::endl;
	{
		FragTrap frag("Frag");
		ClapTrap clap("Clappy");

		frag.attack("Clappy");
		clap.attack("Frag");

		frag.takeDamage(50);
		frag.beRepaired(20);
	}
	std::cout << std::endl;

	std::cout << "=== TEST 3: highFivesGuys Special Ability ===" << std::endl;
	{
		FragTrap frag("Frag");
		frag.highFivesGuys();
	}
	std::cout << std::endl;

	std::cout << "=== TEST 4: Copy Constructor ===" << std::endl;
	{
		FragTrap original("Original");
		FragTrap copy(original);
		copy.attack("someone");
	}
	std::cout << std::endl;

	std::cout << "=== TEST 5: Assignment Operator ===" << std::endl;
	{
		FragTrap a("FragA");
		FragTrap b("FragB");
		b = a;
		b.attack("target");
	}
	std::cout << std::endl;

	std::cout << "=== TEST 6: Edge Cases (dead robot) ===" << std::endl;
	{
		FragTrap dead("DeadFrag");
		dead.takeDamage(999);
		dead.attack("anyone");
		dead.beRepaired(10);
		dead.highFivesGuys();
	}

	return 0;
}