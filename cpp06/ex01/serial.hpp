/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:41:32 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:41:49 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>

typedef struct data_s
{
	std::string	strOne;
	int			intOne;
	std::string	strTwo;
}	Data;

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif
