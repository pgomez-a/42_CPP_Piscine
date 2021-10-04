/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:05:23 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:05:31 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 ** Create a zombie and announce it
 ** Allocate memory on stack because it won't be returned
 **/

void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
	return ;
}
