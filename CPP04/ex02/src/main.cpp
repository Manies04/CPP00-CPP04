/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 14:47:22 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/13 10:23:18 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	// TEST 1 — Animal abstracto nao pode ser instanciado (uncomment to verify)
	/* Animal a;
	new Animal(); */
	
	// TEST 2 — Dog e Cat continuam a funcionar normalmente
	std::cout << "\n=== TEST 2: Concrete Dog and Cat ===" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << std::endl;
		std::cout << i->getType() << std::endl;
		j->makeSound();
		i->makeSound();

		delete j;
		delete i;
	}

	std::cout << "\n=== TEST 3: Destruction Chaining ===" << std::endl;
	{
		const Animal* animals[4];
		animals[0] = new Dog();
		animals[1] = new Cat();
		animals[2] = new Dog();
		animals[3] = new Cat();

		for (int i = 0; i < 4; i++)
			animals[i]->makeSound();

		for (int i = 0; i < 4; i++)
			delete animals[i];
	}

	std::cout << "\n=== TEST 4: Deep Copy Scope Test ===" << std::endl;
	{
		Dog basic;
		basic.getBrain()->setIdea(0, "I am basic");
		{
			Dog tmp = basic;
			std::cout << "tmp  idea[0]: " << tmp.getBrain()->getIdea(0) << std::endl;
		}
		std::cout << "basic idea[0]: " << basic.getBrain()->getIdea(0) << std::endl;
		basic.makeSound();
	}

	return (0);
}