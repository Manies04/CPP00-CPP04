/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:58:57 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/11 20:59:08 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"


WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& name) : WrongAnimal(name)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = name;
}

WrongCat& WrongCat::operator=(const WrongCat& name)
{
	std::cout << "WrongCat Assignement Operator" << std::endl;
	if (this != &name)
		WrongAnimal::operator=(name);
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "!woeM" << std::endl;
}