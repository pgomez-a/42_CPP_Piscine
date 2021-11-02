/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:43:13 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:44:59 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serial.hpp"

static void	leaks(void)
{
	system("leaks serial");
}

int	main(void)
{
	Data		walle;
	Data*		uint_ptr = NULL;
	uintptr_t	uint_raw = 0;

	atexit(leaks);
	walle.strOne = "Wall-E";
	walle.intOne = 3;
	walle.strTwo = "Dall-E";

	std::cout << "*** CONTENT OF DATA ***" << std::endl;
	std::cout << "Data1 --> " << walle.strOne << std::endl;
	std::cout << "Data2 --> " << walle.intOne << std::endl;
	std::cout << "Data3 --> " << walle.strTwo << std::endl;
	std::cout << std::endl;

	std::cout << "*** VALUES BEFORE SERIAL ***" << std::endl;
	std::cout << "&walle   --> " << &walle << std::endl;
	std::cout << "uint_ptr --> " << uint_ptr << std::endl;
	std::cout << "uint_raw --> " << uint_raw << std::endl;
	std::cout << std::endl;

	std::cout << "*** CALL SERIAL FUNCTIONS ***" << std::endl;
	uint_raw = serialize(&walle);
	uint_ptr = deserialize(uint_raw);
	std::cout << std::endl;

	std::cout << "*** VALUES AFTER SERIAL ***" << std::endl;
	std::cout << "&walle   --> " << &walle << std::endl;
	std::cout << "uint_ptr --> " << uint_ptr << std::endl;
	std::cout << "uint_raw --> " << uint_raw << std::endl;
	std::cout << std::endl;

	std::cout << "*** CHECK IF VALUES ***" << std::endl;
	std::cout << "Data1: --> " << uint_ptr->strOne << std::endl;
	std::cout << "Data2: --> " << uint_ptr->intOne << std::endl;
	std::cout << "Data3: --> " << uint_ptr->strTwo << std::endl;
	std::cout << std::endl;

	return (0);
}
