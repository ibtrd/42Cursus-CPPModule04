/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:10:10 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 18:34:43 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Brain.hpp"

/* CONSTRUCTORS ************************************************************* */

Brain::Brain(void) : _index(0)
{
	std::cout << "\e[34mBrain\e[0m default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "\e[34mBrain\e[0m copy constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

Brain::~Brain(void)
{
	std::cout << "\e[34mBrain\e[0m destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

Brain	&Brain::operator=(const Brain &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < IDEAS_SIZE; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
	this->_index = other._index;
	return (*this);
}

/* ************************************************************************** */

void	Brain::addIdea(const std::string &str)
{
	this->_ideas[this->_index++] = str;
	if (this->_index >= IDEAS_SIZE)
		this->_index = 0;
}

void	Brain::displayIdeas(void) const
{
	for (int i = 0; i < IDEAS_SIZE; i++)
	{
		if (this->_ideas[i].length())
		{
			if (i)
				std::cout << " ";
			std::cout << this->_ideas[i];
		}
	}
	std::cout << std::endl;
}
