/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:12:27 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/17 00:05:32 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>

#include "ICharacter.hpp"

# define CHARACTER_MATERIA_STORAGE 4

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[CHARACTER_MATERIA_STORAGE];

		void	_initInventory(void);

	protected:

	public:
		Character(void);
		Character(const std::string &);
		Character(const Character &);

		~Character(void);

		Character	&operator=(const Character &);

		std::string const	&getName() const;
		void 				equip(AMateria *);
		void 				unequip(int);
		void 				use(int, ICharacter &);
};

#endif /* ******************************************************************* */
