/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:32:32 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 15:08:07 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & animal);
		virtual	~Animal(void);

		Animal&		operator=(Animal const & animal);

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;
		virtual Brain*	getBrain(void) const = 0;

	protected:
		std::string	_type;
};

#endif
