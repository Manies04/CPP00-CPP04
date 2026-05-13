/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 16:09:23 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/12 14:46:03 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"


Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& name) : Animal(name)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	this->brain = NULL;
	*this = name;
}

Cat& Cat::operator=(const Cat& name)
{
	std::cout << "Cat Assignement Operator" << std::endl;
	if (this != &name)
	{
		Animal::operator=(name);
		delete this->brain;
		this->brain = new Brain(*name.brain);
	}
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}