/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:20:18 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 15:20:19 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const & ice);
		~Ice(void);

		Ice&	operator=(Ice const & ice);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
