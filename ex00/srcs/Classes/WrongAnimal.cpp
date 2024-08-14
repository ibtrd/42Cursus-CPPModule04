/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:14:57 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:41:42 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongAnimal.hpp"

/* CONSTRUCTORS ************************************************************* */

WrongAnimal::WrongAnimal(void) : type(WRONGANIMAL_TYPE)
{
	std::cout << "\e[31mWrongAnimal\e[0m default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "\e[31mWrongAnimal\e[0m copy constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\e[31mWrongAnimal\e[0m destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	return (*this);
}

/* ************************************************************************** */

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void 		WrongAnimal::setType(const std::string &str)
{
	this->type = str;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "*wrong animal sound*" << std::endl;
}
