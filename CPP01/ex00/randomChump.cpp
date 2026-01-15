/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 16:48:09 by tiade-al          #+#    #+#             */
/*   Updated: 2025/12/30 21:47:29 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//like int = x creates on the stack
void randomChump( std::string name ){
	Zombie zombie = name;
	zombie.announce();
}