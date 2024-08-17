/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:12:46 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/17 19:20:28 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* CONSTRUCTORS ************************************************************* */

Character::Character(void) : _name("unnamed") 
{
	this->_initInventory();
}

Character::Character(const std::string &name) : _name(name)
{
	this->_initInventory();
}

Character::Character(const Character &other)
{
	this->_initInventory();
	*this = other;
}

/* DESTRUCTOR *************************************************************** */

Character::~Character(void)
{
	for (int i = 0; i < CHARACTER_MATERIA_STORAGE; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

/* ASIGNMENT OPERATOR ******************************************************* */

Character	&Character::operator=(const Character &other)
{
	if (this == &other)
		return (*this);

	this->_name = other._name;
	for (int i = 0; i < CHARACTER_MATERIA_STORAGE; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

/* ************************************************************************** */

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < CHARACTER_MATERIA_STORAGE; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= CHARACTER_MATERIA_STORAGE)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::_initInventory(void)
{
	for (int i = 0; i < CHARACTER_MATERIA_STORAGE; i++)
	{
		this->_inventory[i] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0
		|| idx >= CHARACTER_MATERIA_STORAGE
		|| !this->_inventory[idx])
		return ;
	
	this->_inventory[idx]->use(target);
}
