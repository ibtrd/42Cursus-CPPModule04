/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:14:57 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 17:52:48 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"

/* CONSTRUCTORS ************************************************************* */

AAnimal::AAnimal(void) : type(ANIMAL_TYPE)
{
	std::cout << "\e[33mAnimal\e[0m default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
	std::cout << "\e[33mAnimal\e[0m copy constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

AAnimal::~AAnimal(void)
{
	std::cout << "\e[33mAnimal\e[0m destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	return (*this);
}

/* ************************************************************************** */

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void 		AAnimal::setType(const std::string &str)
{
	this->type = str;
}
