/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:42:48 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:42:49 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

/**
 ** Return the parameter in an integer type
 **/

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

/**
 ** Return the raw data to a Data structure
 **/

Data*		deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}
