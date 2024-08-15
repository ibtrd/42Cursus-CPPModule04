/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:26:49 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 15:56:07 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

/* CONSTRUCTORS ************************************************************* */

Dog::Dog(void)
{
	std::cout << "\e[32mDog\e[0m default constructor called" << std::endl;
	this->_brain = new Brain();
	this->type = DOG_TYPE;
}

Dog::Dog(const Dog &other)
{
	std::cout << "\e[32mDog\e[0m copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = other;
}

/* DESTRUCTOR *************************************************************** */

Dog::~Dog(void)
{
	std::cout << "\e[32mDog\e[0m destructor called" << std::endl;
	delete _brain;
}

/* ASIGNMENT OPERATOR ******************************************************* */

Dog		&Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	*(this->_brain) = *(other._brain);
	return (*this);
}

/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "*Bark*" << std::endl;
}

void	Dog::think(const std::string &str)
{
	this->_brain->addIdea(str);
}

void	Dog::displayIdeas(void) const
{
	this->_brain->displayIdeas();
}
