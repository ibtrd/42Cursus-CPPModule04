/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:59:12 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/16 00:17:49 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

# define CURE_TYPE "cure";

class Cure : public AMateria
{
	private:

	protected:

	public:
		Cure(void);
		Cure(const Cure &);

		~Cure(void);

		Cure	&operator=(const Cure &);

		AMateria	*clone() const;
		void 		use(ICharacter &);
};

#endif /* ******************************************************************* */
