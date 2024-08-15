/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:14:57 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 18:39:06 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"

/* CONSTRUCTORS ************************************************************* */

Animal::Animal(void) : type(ANIMAL_TYPE)
{
	std::cout << "\e[33mAnimal\e[0m default constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "\e[33mAnimal\e[0m copy constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

Animal::~Animal(void)
{
	std::cout << "\e[33mAnimal\e[0m destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

Animal	&Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	return (*this);
}

/* ************************************************************************** */

std::string	Animal::getType(void) const
{
	return (this->type);
}

void 		Animal::setType(const std::string &str)
{
	this->type = str;
}

void		Animal::makeSound(void) const
{
	std::cout << "*...*" << std::endl;
}
