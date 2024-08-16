/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:54:54 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/16 00:00:54 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		
		virtual std::string const	&getName() const = 0;
		
		virtual void 				equip(AMateria *) = 0;
		virtual void 				unequip(int) = 0;
		virtual void 				use(int, ICharacter &) = 0;
};

#endif /* ******************************************************************* */