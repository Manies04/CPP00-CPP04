/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:54:52 by tiade-al          #+#    #+#             */
/*   Updated: 2025/10/09 22:48:05 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"
#include <cstdlib>

int main(void)
{
	PhoneBook PhoneBook;
	std::string cmd;

	while(1)
	{
		std::cout << "Would you like to (ADD, SEARCH, EXIT)?" << std::endl;
		std::cin >> cmd;
		if(std::cin.eof())
			exit(0);
		if(cmd == "ADD")
			PhoneBook.AddContact();
		else if(cmd == "SEARCH")
			PhoneBook.SearchContact();
		else if(cmd == "EXIT")
			PhoneBook.ExitProgram();
		else
			std::cout << "Please try again!" << std::endl;
	}
}