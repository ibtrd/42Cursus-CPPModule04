/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:27:37 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:49:04 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

# define WRONGCAT_TYPE "WrongCat";

class WrongCat : public WrongAnimal
{
	private:

	protected:

	public:
		WrongCat(void);
		WrongCat(const WrongCat &);

		~WrongCat(void);

		WrongCat	&operator=(const WrongCat &);

		void	makeSound(void) const;
};

#endif /* ******************************************************************* */
