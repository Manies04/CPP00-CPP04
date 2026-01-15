/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 23:39:58 by tiade-al          #+#    #+#             */
/*   Updated: 2025/12/30 23:54:07 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int size = 5;
	Zombie *zombies = zombieHorde(size, "Alfred");
	for (int i = 0; i < size; i++)
		zombies[i].announce();
	delete[]zombies;
}