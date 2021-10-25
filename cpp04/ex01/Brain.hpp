/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:36:06 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:37:21 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(Brain const & brain);
		~Brain(void);

		Brain&	operator=(Brain const & brain);

		int				getPos(void) const;
		std::string*	getIdeas(void) const;
		void			setIdeas(std::string ideas);

	private:
		std::string*	_ideas;
		int				_pos;
};

#endif
