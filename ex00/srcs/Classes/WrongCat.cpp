/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:27:52 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:42:15 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongCat.hpp"

/* CONSTRUCTORS ************************************************************* */

WrongCat::WrongCat(void)
{
	type = WRONGCAT_TYPE;
	std::cout << "\e[34mWrongCat\e[0m default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	std::cout << "\e[34mWrongCat\e[0m copy constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

WrongCat::~WrongCat(void)
{
	std::cout << "\e[34mWrongCat\e[0m destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this == &other)
		return (*this);
	this->setType(other.getType());
	return (*this);
}

/* ************************************************************************** */

void		WrongCat::makeSound(void) const
{
	std::cout << "*WrongMeow*" << std::endl;
}
