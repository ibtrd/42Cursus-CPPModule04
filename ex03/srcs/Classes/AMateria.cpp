/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:45:13 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 21:59:46 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* CONSTRUCTORS ************************************************************* */

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const &type): type(type) {}

/* DESTRUCTOR *************************************************************** */

AMateria::~AMateria(void) {}

/* ************************************************************************** */

std::string const	&AMateria::getType() const
{
	return (this->type);
}
