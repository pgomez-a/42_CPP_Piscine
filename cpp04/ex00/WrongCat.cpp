/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:23:10 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:27:50 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a WrongCat object
 **/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Maybe it's a WrongCat what has just bornt!" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & cat) : WrongAnimal("WrongCat")
{
	std::cout << "Jeje, WrongCat has been copied :/" << std::endl;
	(void)cat;
	return ;
}

/**
 ** Default Constructor
 **/

WrongCat::~WrongCat(void)
{
	std::cout << "Yeahhh!! WrongCat has leaved this place..." << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

WrongCat&	WrongCat::operator=(WrongCat const & cat)
{
	if (this != &cat)
		this->_type = cat.getType();
	return (*this);
}
