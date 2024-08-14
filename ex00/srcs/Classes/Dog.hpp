/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:26:46 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:03:24 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

# define DOG_TYPE "Dog";

class Dog : public Animal
{
	private:

	protected:

	public:
		Dog(void);
		Dog(const Dog &);

		~Dog(void);

		Dog	&operator=(const Dog &);

		void	makeSound(void) const;
};

#endif /* ******************************************************************* */
