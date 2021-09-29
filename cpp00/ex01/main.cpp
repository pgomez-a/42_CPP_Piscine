/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:46:39 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/09/28 16:46:40 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	yellow_book;
	std::string	cmd;

	std::cout << "What do you want to do? " << std::endl;
	std::getline(std::cin, cmd);
	while (cmd.compare("EXIT") != 0)
	{
		if (cmd.compare("ADD") == 0)
			yellow_book.add();
		else if (cmd.compare("SEARCH") == 0)
			yellow_book.search();
		std::cout << "What do you want to do? " << std::endl;
		std::getline(std::cin, cmd);
	}
	return (0);
}
