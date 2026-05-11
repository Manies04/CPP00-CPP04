/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:44:48 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/09 23:12:31 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){

	ClapTrap a;
	ClapTrap b("Batata");
	ClapTrap c("Tong");

	b.attack("Tong");
	c.takeDamage(10);
	c.attack("Tong");
	
	std::cout << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << std::endl;
	
	a.attack("Batata");
	b.takeDamage(5);
	b.beRepaired(11);
	
	std::cout << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << std::endl;

	c.beRepaired(5);
	c.attack("unknown");
	b.attack("unknown");
	a.takeDamage(2);

	return (0);
}