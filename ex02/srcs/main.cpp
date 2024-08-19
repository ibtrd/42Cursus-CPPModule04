/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:02:21 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/19 23:28:53 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ZOO_SIZE 4

int main(void)
{
	{
		//constructions
			const AAnimal* j = new Dog();
			const AAnimal* i = new Cat();
			std::cout << std::endl;

		std::cout << j->getType() << " ";
		j->makeSound();

		std::cout << i->getType() << " ";
		i->makeSound();

		//destructions
			std::cout << std::endl;
			delete j;
			delete i;
	}
	std::cout << std::endl;
	{
		const AAnimal	*zoo[ZOO_SIZE];

		//constructions
		for (int i = 0; i < ZOO_SIZE; i++)
		{
			std::cout << "Allocating animal #" << i << std::endl;
			if (i % 2)
				zoo[i] = new Dog();
			else
				zoo[i] = new Cat();
		}
		std::cout << std::endl;

		//makeSound();
		for (int i = 0; i < ZOO_SIZE; i++)
		{
			std::cout << "animal #" << i << " says ";
			zoo[i]->makeSound();
		}

		//destructions
		std::cout << std::endl;
		for (int i = 0; i < ZOO_SIZE; i++)
		{
			std::cout << "Deleting animal #" << i << std::endl;
			delete zoo[i];
		}
	}
	std::cout << std::endl;
	{
		Dog saiko;
		std::cout << "Saiko has been born ";
		saiko.makeSound();
		std::cout << std::endl;
	
		//Testing Dog's brain;
		saiko.think("squirrel");
		saiko.think("stick");
		saiko.think("food");
		saiko.think("ball");
		std::cout << "Saiko's brain content: ";
		saiko.displayIdeas();
		std::cout << std::endl;

		//Testing Dog's deep copy
		Dog ruby = saiko;
		std::cout << "Ruby has been born ";
		ruby.makeSound();
		std::cout << std::endl;

		std::cout << "Saiko's brain content: ";
		saiko.displayIdeas();
		std::cout << "Ruby's brain content: ";
		ruby.displayIdeas();

		std::cout << std::endl;
		saiko.think("nanou");
		ruby.think("platy");

		std::cout << "Saiko's brain content: ";
		saiko.displayIdeas();
		std::cout << "Ruby's brain content: ";
		ruby.displayIdeas();
		
		//Testing Dog's assignement operator
		std::cout << std::endl;
		saiko = ruby;
		std::cout << "Saiko's brain content: ";
		saiko.displayIdeas();
		std::cout << "Ruby's brain content: ";
		ruby.displayIdeas();

		std::cout << std::endl;
	}

	// Animal cannotExist; // This cannot compile because Animal is an abstract class
	return (0);
}
