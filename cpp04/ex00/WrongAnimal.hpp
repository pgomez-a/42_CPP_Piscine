/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:21:47 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:30:17 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & animal);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(WrongAnimal const & animal);

		void		makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
