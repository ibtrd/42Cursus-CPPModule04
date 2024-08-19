/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:14:40 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 17:50:20 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

# define ANIMAL_TYPE "Default AAnimal"

class AAnimal
{
	protected:
		std::string	type;

	public:
		AAnimal(void);
		AAnimal(const AAnimal &);

		virtual ~AAnimal(void);

		AAnimal	&operator=(const AAnimal &);

		std::string		getType(void) const;
		void			setType(const std::string &);

		virtual void	makeSound(void) const = 0;
};

#endif /* ******************************************************************* */
