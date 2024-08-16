/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   World.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 00:45:41 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/16 01:33:12 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORLD_HPP
# define WORLD_HPP

# include "AMateria.hpp"

typedef struct s_floor
{
	AMateria		*materia;
	struct s_floor	*next;
}	t_floor;

class World
{
	private:
		static t_floor	*_floor;

	protected:
		void	dropMateria(AMateria *);

	public:
		World(void);
		World(const World &);

		~World(void);

		World	&operator=(const World &);
};

#endif /* ******************************************************************* */
