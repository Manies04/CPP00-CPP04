/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiade-al <tiade-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:24:58 by tiade-al          #+#    #+#             */
/*   Updated: 2026/01/14 22:53:02 by tiade-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Incorrect Number of Elements" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	if (s1.empty())
	{
		std::cerr << "Nothing to search for!" << std::endl;
		return (1);
	}

	std::ifstream infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: could not open input file: " << filename << std::endl;
		return (1);
	}

	std::string out_name = filename + ".replace";
	std::ofstream outfile(out_name.c_str());
	if (!outfile)
	{
		std::cerr << "Unable to create .replace file" << std::endl;
		return (1);
	}

	std::string	line;
	size_t		pos;
	while (std::getline(infile, line))
	{
		size_t start = 0;
		while ((pos = line.find(s1, start)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos,s2);
			start = pos + s2.length();
		}
		outfile << line << "\n";
	}
	infile.close();
	outfile.close();
	return (0);
}