/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:25:15 by tiade-al          #+#    #+#             */
/*   Updated: 2025/10/06 10:13:40 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++)	
			for (int x = 0; argv[i][x]; x++)
				std::cout << (char)toupper(argv[i][x]);
	std::cout << std::endl;
	return(0);
}