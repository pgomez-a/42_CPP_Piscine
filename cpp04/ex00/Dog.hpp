/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:18:54 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:18:55 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & dog);
		~Dog(void);

		Dog&	operator=(Dog const & dog);

		void	makeSound(void) const;
};

#endif
