/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:27:37 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 15:35:18 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# define CAT_TYPE "Cat";

class Cat : public Animal
{
	private:
		Brain	*_brain;

	protected:

	public:
		Cat(void);
		Cat(const Cat &);

		~Cat(void);

		Cat	&operator=(const Cat &);

		void	makeSound(void) const;
		void	think(const std::string &);
		void	displayIdeas(void) const;
};

#endif /* ******************************************************************* */
