/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:09:08 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/12 14:27:29 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& name) : Animal(name)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	this->brain = NULL;
	*this = name;
}

Dog& Dog::operator=(const Dog& name)
{
	std::cout << "Dog Assignement Operator" << std::endl;
	if (this != &name)
	{
		Animal::operator=(name);
		delete this->brain;
		this->brain = new Brain(*name.brain);
	}
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete this->brain;
}


void Dog::makeSound() const{
	std::cout << "Woof! Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}