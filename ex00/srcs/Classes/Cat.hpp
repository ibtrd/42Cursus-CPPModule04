/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:27:37 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/19 23:14:15 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# define CAT_TYPE "Cat";

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat &);

		~Cat(void);

		Cat	&operator=(const Cat &);

		void	makeSound(void) const;
};

#endif /* ******************************************************************* */
