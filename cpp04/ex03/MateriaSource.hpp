/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:27:32 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 16:13:20 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

class	MateriaSource : public IMateriaSource
{
	protected:
		AMateria*	materia[4];
		int			idx;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & source);
		~MateriaSource(void);

		MateriaSource&	operator=(MateriaSource const & source);

		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);
};

#endif
