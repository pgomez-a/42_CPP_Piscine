/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:02:05 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 16:03:11 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	Karen		karen;
	std::string	level;

	if (argc == 2)
	{
		level = argv[1];
		karen.complain(level);
		return (0);
	}
	std::cout << "Error: you have to send only one level!" << std::endl;
	return (1);
}
