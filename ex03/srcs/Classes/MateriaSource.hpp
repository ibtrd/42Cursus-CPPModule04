/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:13:15 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 22:15:02 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#define MATERIASOURCE_STORAGE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materias[MATERIASOURCE_STORAGE];
		size_t		_stored;

	protected:

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &);

		~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &);

		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &);
};

#endif /* ******************************************************************* */
