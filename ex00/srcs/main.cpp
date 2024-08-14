/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:02:21 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:50:49 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		//constructions
			const Animal* meta = new Animal();
			const Animal* j = new Dog();
			const Animal* i = new Cat();
			std::cout << std::endl;

		std::cout << j->getType() << " ";
		j->makeSound();

		std::cout << i->getType() << " ";
		i->makeSound();

		std::cout << meta->getType() << " ";
		meta->makeSound();

		//destructions
			std::cout << std::endl;
			delete meta;
			delete j;
			delete i;
	}
	std::cout << std::endl;
	{
		//constructions
			const WrongAnimal* meta = new WrongAnimal();
			const WrongAnimal* i = new WrongCat();
			std::cout << std::endl;

		std::cout << i->getType() << " ";
		i->makeSound();

		std::cout << meta->getType() << " ";
		meta->makeSound();

		//destructions
			std::cout << std::endl;
			delete meta;
			delete i;
	}
	std::cout << std::endl;
	{
		const Cat* meta = new Cat();
		delete meta;
	}
	return (0);
}
