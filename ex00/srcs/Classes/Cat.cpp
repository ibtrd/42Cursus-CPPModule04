/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:27:52 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:02:35 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Cat.hpp"

/* CONSTRUCTORS ************************************************************* */

Cat::Cat(void)
{
	type = CAT_TYPE;
	std::cout << "\e[35mCat\e[0m default constructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	std::cout << "\e[35mCat\e[0m copy constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

Cat::~Cat(void)
{
	std::cout << "\e[35mCat\e[0m destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

Cat		&Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	return (*this);
}

/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "*Meow*" << std::endl;
}
