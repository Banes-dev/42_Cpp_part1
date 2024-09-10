/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:47:57 by ehay              #+#    #+#             */
/*   Updated: 2024/09/10 13:32:23 by ehay             ###   ########.fr       */
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

	std::ifstream ifs(file_name);

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

	std::ofstream ofs(file_name + ".replace");
	ofs << content;
	ofs.close();
	return (0);
}
