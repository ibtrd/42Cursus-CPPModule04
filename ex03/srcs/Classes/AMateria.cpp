/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:45:13 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/17 19:16:46 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* CONSTRUCTORS ************************************************************* */

AMateria::AMateria(void) {}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria::AMateria(std::string const &type): type(type) {}

/* DESTRUCTOR *************************************************************** */

AMateria::~AMateria(void) {}

/* ASIGNMENT OPERATOR ******************************************************* */

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

/* ************************************************************************** */

std::string const	&AMateria::getType() const
{
	return (this->type);
}
