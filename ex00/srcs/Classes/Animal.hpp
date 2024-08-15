/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:14:40 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 18:14:18 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

# define ANIMAL_TYPE "Animal"

class Animal
{
	private:

	protected:
		std::string	type;

	public:
		Animal(void);
		Animal(const Animal &);

		virtual ~Animal(void);

		Animal	&operator=(const Animal &);

		std::string		getType(void) const;
		void			setType(const std::string &);

		virtual void	makeSound(void) const;
};

#endif /* ******************************************************************* */
