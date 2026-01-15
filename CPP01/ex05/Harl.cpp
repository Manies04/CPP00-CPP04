/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 23:45:31 by tiade-al          #+#    #+#             */
/*   Updated: 2026/01/15 13:21:11 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(void){
	std::cout << "Debugging..." << std::endl;
}
void Harl::info(void){
	std::cout << "Just informing u that im always hungry" << std::endl;
}
void Harl::warning(void){
	std::cout << "WARNING!! Don't eat beans u stinky!" << std::endl;
}
void Harl::error(void){
	std::cout << "ERROR 404" << std::endl;
}

void Harl::complain( std::string level ){
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	void(Harl::*func[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*func[i])();
			return;
		}
	}
	std::cout << "Haven't heard others complain about that before!" << std::endl;
}