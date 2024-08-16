/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:58:20 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 23:05:10 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

# define ICE_TYPE "ice";

class Ice : public AMateria
{
	private:

	protected:

	public:
		Ice(void);
		Ice(const Ice &);

		~Ice(void);

		Ice	&operator=(const Ice &);

		AMateria	*clone() const;
		void 		use(ICharacter &target);
};

#endif /* ******************************************************************* */
