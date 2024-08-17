/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:44:52 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/17 18:39:08 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(const AMateria &);
		AMateria(std::string const &);
		
		virtual ~AMateria(void);

		AMateria	&operator=(const AMateria &);

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void 		use(ICharacter &) = 0;
};

#endif /* ******************************************************************* */