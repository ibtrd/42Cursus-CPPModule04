/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:26:49 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:04:12 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Dog.hpp"

/* CONSTRUCTORS ************************************************************* */

Dog::Dog(void)
{
	type = DOG_TYPE;
	std::cout << "\e[32mDog\e[0m default constructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	std::cout << "\e[32mDog\e[0m copy constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

Dog::~Dog(void)
{
	std::cout << "\e[32mDog\e[0m destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

Dog		&Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	return (*this);
}

/* ************************************************************************** */

void	Dog::makeSound(void) const
{
	std::cout << "*Bark*" << std::endl;
}
