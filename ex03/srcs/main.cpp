/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:02:21 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/17 18:45:28 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());	

	ICharacter *me = new Character("ibertran");
	AMateria *tmp1;
	AMateria *tmp2;

	tmp1 = src->createMateria("ice");
	me->equip(tmp1);

	tmp2 = src->createMateria("cure");
	me->equip(tmp2);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);	// 	shoots an ice bolt
	me->use(1, *bob);	//heals
	me->use(2, *me);		// does nothing
	me->use(3, *me);		// does nothing
	me->use(-5, *me);		// does nothing
	me->use(42, *me);		// does nothing

	me->unequip(-5);		// does nothing
	me->unequip(42);		// does nothing
	me->unequip(0);		// unequip ice materia
	me->use(0, *me);		// does nothing
	delete tmp1;
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);
	me->use(0, *me);	// heals
	me->use(1, *me);	// heals
	me->use(2, *me);	// heals
	me->use(3, *me);	// heals
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);		// cannot equip
	delete tmp1;

	delete bob;
	{
		//Testing Character assignement operator
		ICharacter	*p1 = new Character("lcottet");
		ICharacter	*p2 = new Character("bwisniew");
		AMateria	*tmp;
		
		std::cout << std::endl;
		tmp = src->createMateria("ice");
		p1->equip(tmp);
		tmp = src->createMateria("cure");
		p1->equip(tmp);

		tmp = src->createMateria("cure");
		p2->equip(tmp);
		tmp = src->createMateria("ice");
		p2->equip(tmp);

		std::cout << p1->getName() << " materias:" << std::endl;
		p1->use(0, *me);
		p1->use(1, *me);
		std::cout << std::endl;
		std::cout << p2->getName() << " materias:" << std::endl;
		p2->use(0, *me);
		p2->use(1, *me);
		std::cout << std::endl;
		
		std::cout << "\t*lcottet = *bwisniew;" << std::endl;
		*(Character *)p1 = *(Character *)p2;

		std::cout << p1->getName() << " materias:" << std::endl;
		p1->use(0, *me);
		p1->use(1, *me);
		std::cout << std::endl;
		std::cout << p2->getName() << " materias:" << std::endl;
		p2->use(0, *me);
		p2->use(1, *me);
		std::cout << std::endl;

		delete p1;
		delete p2;
	}
	delete me;
	delete src;

	return 0;
}
