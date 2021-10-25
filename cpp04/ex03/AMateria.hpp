/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:17:18 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 15:18:30 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>


class	AMateria
{
	protected:
		AMateria(void);

		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & materia);
		virtual ~AMateria(void);

		AMateria&	operator=(AMateria const & materia);

		std::string const & 	getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
