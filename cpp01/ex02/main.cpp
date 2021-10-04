/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:23:15 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:25:13 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		stringSTR = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringSTR;
	std::string&	stringREF = stringSTR;

	std::cout << "stringSTR addr: " << &stringSTR << std::endl;
	std::cout << "stringPTR addr: " << stringPTR << std::endl;
	std::cout << "stringREF addr: " << &stringREF << std::endl;

	std::cout << "stringPTR cont: " << *stringPTR << std::endl;
	std::cout << "stringREF cont: " << stringREF << std::endl;
	return (0);
}
