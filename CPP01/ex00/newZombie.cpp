/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:47:02 by tiade-al          #+#    #+#             */
/*   Updated: 2025/12/30 17:18:31 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//like malloc creates on the heap
Zombie* newZombie( std::string name ){
	Zombie *zombie = new Zombie(name);
	return (zombie);
}