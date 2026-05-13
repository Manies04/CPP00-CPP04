/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 00:06:41 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/12 00:38:55 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor" << std::endl;
}
Brain::Brain(const Brain& name)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = name;
}
Brain& Brain::operator=(const Brain& name)
{
	std::cout << "Brain Copy Assignment Operator called" << std::endl;
	if (this != &name)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = name.ideas[i];
	}
	return (*this);
}
Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i > 99)
		return ("Out of the Scope!");
	return (this->ideas[i]);
}
void Brain::setIdea(int i, const std::string& idea)
{
	if (i < 0 || i > 99)
		return ;
	this->ideas[i] = idea;
}