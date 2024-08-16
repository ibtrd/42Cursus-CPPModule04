/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:59:17 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/16 00:45:28 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>

/* CONSTRUCTORS ************************************************************* */

Cure::Cure(void)
{
	this->type = CURE_TYPE;
}

Cure::Cure(const Cure &other)
{
	this->type = CURE_TYPE;
	*this = other;
}

/* DESTRUCTOR *************************************************************** */

Cure::~Cure(void) {}

/* ASIGNMENT OPERATOR ******************************************************* */

Cure	&Cure::operator=(const Cure &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

/* ************************************************************************** */

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
