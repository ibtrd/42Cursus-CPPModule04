/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:09:49 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 15:12:38 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

# define IDEAS_SIZE 100

class Brain
{
	private:
		std::string	_ideas[IDEAS_SIZE];
		int			_index;

	public:
		Brain(void);
		Brain(const Brain &);

		~Brain(void);

		Brain	&operator=(const Brain &);

		void	addIdea(const std::string &);
		void	displayIdeas(void) const;
};

#endif /* ******************************************************************* */
