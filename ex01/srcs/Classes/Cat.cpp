/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:27:52 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 15:52:54 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

/* CONSTRUCTORS ************************************************************* */

Cat::Cat(void)
{
	std::cout << "\e[35mCat\e[0m default constructor called" << std::endl;
	_brain = new Brain();
	type = CAT_TYPE;
}

Cat::Cat(const Cat &other)
{
	std::cout << "\e[35mCat\e[0m copy constructor called" << std::endl;
	_brain = new Brain();
	*this = other;
}

/* DESTRUCTOR *************************************************************** */

Cat::~Cat(void)
{
	std::cout << "\e[35mCat\e[0m destructor called" << std::endl;
	delete _brain;
}

/* ASIGNMENT OPERATOR ******************************************************* */

Cat		&Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	*(this->_brain) = *(other._brain);
	return (*this);
}

/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "*Meow*" << std::endl;
}

void	Cat::think(const std::string &str)
{
	this->_brain->addIdea(str);
}

void	Cat::displayIdeas(void) const
{
	this->_brain->displayIdeas();
}
