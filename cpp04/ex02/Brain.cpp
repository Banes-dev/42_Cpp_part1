/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:38:32 by ehay              #+#    #+#             */
/*   Updated: 2024/09/24 15:02:26 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Construtor etc
Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	const std::string idea_examples[] = {
		"I want to code",
		"I want to play video games",
		"I want sleep",
		"I want eat",
	};
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = idea_examples[rand() % (sizeof(idea_examples) / sizeof(std::string))];
		i++;
	}
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] == copy._ideas[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &copy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] == copy._ideas[i];
		i++;
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

// Other function
const std::string& Brain::GetIdea(int index) const
{
	return (this->_ideas[index]);
}
