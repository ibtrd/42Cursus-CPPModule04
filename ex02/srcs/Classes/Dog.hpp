/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:26:46 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/19 23:29:06 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

# define DOG_TYPE "Dog";

class Dog : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(const Dog &);

		~Dog(void);

		Dog	&operator=(const Dog &);

		void	makeSound(void) const;
		void	think(const std::string &);
		void	displayIdeas(void) const;
};

#endif /* ******************************************************************* */
