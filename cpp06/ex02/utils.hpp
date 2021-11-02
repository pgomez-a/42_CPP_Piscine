/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:48:19 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:48:21 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <exception>

class	Base
{
	public:
		virtual	~Base() {};
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

/**
 ** utils.cpp
 **/

Base*	generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
