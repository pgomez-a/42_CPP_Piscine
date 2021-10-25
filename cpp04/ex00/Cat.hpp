/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:20:41 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:20:42 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & cat);
		~Cat(void);

		Cat&	operator=(Cat const & cat);

		void	makeSound(void) const;
};

#endif
