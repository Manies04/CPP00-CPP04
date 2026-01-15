/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:26:53 by tiade-al          #+#    #+#             */
/*   Updated: 2025/12/30 18:30:00 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	zombie = newZombie("Foo");
	zombie->announce();
	randomChump("Alfred");
	zombie->announce();
	delete(zombie);
	return (0);
}