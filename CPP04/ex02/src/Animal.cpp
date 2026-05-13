/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 14:48:29 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/12 22:57:49 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : type ("Animal")
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal& name)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = name;
}

Animal& Animal::operator=(const Animal& name)
{
	std::cout << "Animal Assignement Operator" << std::endl;
	if (this != &name)
		this->type = name.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}