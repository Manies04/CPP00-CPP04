/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 14:47:22 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/13 10:28:40 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	{
		std::cout << "=== TEST 1: Default Testing ===" << std::endl;
		std::cout << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}

	{
	std::cout << std::endl;
	std::cout << "=== TEST 2: WrongAnimal and WrongCat ===" << std::endl;
	std::cout << std::endl;
	
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i    = new WrongCat();
	const WrongCat*    w    = new WrongCat();

	std::cout << i->getType() << std::endl;
	std::cout << "\nUsed as WrongAnimal* (wrong):" << std::endl;
	i->makeSound();
	
	std::cout << "\nUsed as WrongCat* (correct):" << std::endl;
	w->makeSound();

	meta->makeSound();

	delete meta;
	delete i;
	delete w;
}
	
	return 0;
}