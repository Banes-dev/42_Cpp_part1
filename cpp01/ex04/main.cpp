/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:47:57 by ehay              #+#    #+#             */
/*   Updated: 2024/10/02 16:40:57 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Not 3 argument, you must do like this example :" << std::endl <<  "./program file_name s1 s2" << std::endl;
		return (1);
	}
	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	// check si on peut open le file
	std::ifstream ifs;
	ifs.open(file_name.c_str());
	if (!ifs.good())
	{
		std::cout << "Error : for open the file (file not exist)" << std::endl;
		return (1);
	}
	if (ifs.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "Error : the file is empty" << std::endl;
		return (1);
	}

	std::string content;
	while (ifs.good())
	{
		std::string line;
		std::size_t found;
		std::getline(ifs, line);
		found = line.find(s1, 0);
		while (found != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1, found);
		}
		content += line;
		if (ifs.eof())
			break;
		content += "\n";
	}

	ifs.close();

	std::string file_name_rename = file_name + ".replace";
	std::ofstream ofs;
	ofs.open(file_name_rename.c_str());
	ofs << content;
	ofs.close();
	return (0);
}
