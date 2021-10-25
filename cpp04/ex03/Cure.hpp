/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:21:52 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 15:21:54 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & cure);
		~Cure(void);

		Cure&	operator=(Cure const & cure);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
