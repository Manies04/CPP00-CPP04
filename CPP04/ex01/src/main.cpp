/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 14:47:22 by tiade-al          #+#    #+#             */
/*   Updated: 2026/05/13 11:40:57 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	std::cout << "=== TEST 1: Base Testing ===" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		j->makeSound();
		i->makeSound();
		delete j;
		delete i;
	}

	std::cout << "\n=== TEST 2: Array de Animals ===" << std::endl;
	{
		const Animal* animals[10];

		for (int i = 0; i < 5; i++)
			animals[i] = new Dog();
		for (int i = 5; i < 10; i++)
			animals[i] = new Cat();

		std::cout << "\n--- Sons ---" << std::endl;
		for (int i = 0; i < 10; i++)
			animals[i]->makeSound();

		std::cout << "\n--- Delete ---" << std::endl;
		for (int i = 0; i < 10; i++)
			delete animals[i];
	}

	std::cout << "\n=== TEST 3: Deep Copy Dog ===" << std::endl;
	{
		Dog dog1;
		dog1.getBrain()->setIdea(0, "I want to eat");
		dog1.getBrain()->setIdea(1, "I want to run");

		Dog dog2(dog1); // copy constructor

		std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

		// modifica dog2 — nao deve afectar dog1
		dog2.getBrain()->setIdea(0, "I want to sleep");

		std::cout << "After modifying dog2:" << std::endl;
		std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
		std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

		// enderecos diferentes — deep copy confirmada
		std::cout << "dog1 brain address: " << dog1.getBrain() << std::endl;
		std::cout << "dog2 brain address: " << dog2.getBrain() << std::endl;
	}

	std::cout << "\n=== TEST 4: Deep Copy Cat (operator=) ===" << std::endl;
	{
		Cat cat1;
		cat1.getBrain()->setIdea(0, "I want to nap");

		Cat cat2;
		cat2 = cat1;

		cat2.getBrain()->setIdea(0, "I want to hunt");

		std::cout << "cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
		std::cout << "cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;
		std::cout << "cat1 brain address: " << cat1.getBrain() << std::endl;
		std::cout << "cat2 brain address: " << cat2.getBrain() << std::endl;
	}
	std::cout << "\n=== TEST 5: Scope Deep Copy ===" << std::endl;
	{
		Dog basic;
		basic.getBrain()->setIdea(0, "I am basic");
		{
			Dog tmp = basic;
			std::cout << "tmp idea[0]: " << tmp.getBrain()->getIdea(0) << std::endl;
		}
		std::cout << "basic still alive: " << basic.getBrain()->getIdea(0) << std::endl;
		basic.makeSound();
	}

	return (0);
}