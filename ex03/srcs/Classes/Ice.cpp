/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:58:18 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/17 19:21:52 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Ice.hpp"

/* CONSTRUCTORS ************************************************************* */

Ice::Ice(void)
{
	this->type = ICE_TYPE;
}

Ice::Ice(const Ice &other)
{
	this->type = ICE_TYPE;
	*this = other;
}

/* DESTRUCTOR *************************************************************** */

Ice::~Ice(void) {}

/* ASIGNMENT OPERATOR ******************************************************* */

Ice	&Ice::operator=(const Ice &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

/* ************************************************************************** */

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
