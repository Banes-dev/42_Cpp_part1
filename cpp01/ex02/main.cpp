/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:47:57 by ehay              #+#    #+#             */
/*   Updated: 2024/09/09 13:25:51 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	std::cout << std::endl << "Adress :" << std::endl;
	std::cout << &str << std::endl;
	std::cout << &str_ptr << std::endl;
	std::cout << &str_ref << std::endl;

	std::cout << std::endl << "Value :" << std::endl;
	std::cout << str << std::endl;
	std::cout << *str_ptr << std::endl;
	std::cout << str_ref << std::endl << std::endl;
	return (0);
}
