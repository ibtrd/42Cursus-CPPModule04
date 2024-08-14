/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 00:14:40 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/15 01:48:51 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

# define WRONGANIMAL_TYPE "Default WrongAnimal"

class WrongAnimal
{
	private:

	protected:
		std::string	type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &);

		virtual ~WrongAnimal(void);

		WrongAnimal	&operator=(const WrongAnimal &);

		std::string	getType(void) const;
		void		setType(const std::string &);

		void		makeSound(void) const;
};

#endif /* ******************************************************************* */
