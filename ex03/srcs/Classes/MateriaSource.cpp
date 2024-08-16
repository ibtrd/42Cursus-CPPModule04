/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:13:44 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/16 00:12:22 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* CONSTRUCTORS ************************************************************* */

MateriaSource::MateriaSource(void) : _stored(0)
{
	for (int i = 0; i < MATERIASOURCE_STORAGE; i++)
	{
		this->_materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

/* DESTRUCTOR *************************************************************** */

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MATERIASOURCE_STORAGE; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

/* ASIGNMENT OPERATOR ******************************************************* */

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return (*this);
	this->_stored = other._stored;
	for (int i = 0; i < MATERIASOURCE_STORAGE; i++)
	{
		if (this->_materias[i])
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

/* ************************************************************************** */

void		MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
		return ;
	if (this->_stored == MATERIASOURCE_STORAGE)
	{
		delete materia;
	}
	else
	{
		this->_materias[_stored++] = materia;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MATERIASOURCE_STORAGE; i++)
	{
		if (!type.compare(this->_materias[i]->getType()))
			return (this->_materias[i]->clone());
	}
	return (NULL);
}
