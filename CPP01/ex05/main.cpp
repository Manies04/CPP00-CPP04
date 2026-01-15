/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:50:12 by tiade-al          #+#    #+#             */
/*   Updated: 2026/01/15 13:20:49 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	
std::cout << "----Default tests----" << std::endl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
std::cout << "----Other tests----" << std::endl;
	harl.complain("ERRR");
	harl.complain("");
	harl.complain("42");
	harl.complain("xD");
	return(0);
}