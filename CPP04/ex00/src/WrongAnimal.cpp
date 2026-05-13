/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:58:51 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/11 20:59:04 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& name)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = name;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& name)
{
	std::cout << "WrongAnimal Assignement Operator" << std::endl;
	if (this != &name)
		this->type = name.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal goes brrrrr..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}