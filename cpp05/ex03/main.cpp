/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:15:12 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 18:14:37 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <exception>

static void	search_leaks(void)
{
	std::cout << std::endl << std::endl;
	system("leaks bureaucrat");
}

int	main(void)
{
	atexit(search_leaks);
	{
		Intern  	someRandomIntern;
		Bureaucrat	bur("Wall-E", 45);
		Form*   	rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		if (rrf)
		{
			std::cout << bur << std::endl;
			std::cout << *rrf << std::endl;
			std::cout << std::endl << std::endl;
			bur.executeForm(*rrf);
			bur.signForm(*rrf);
			bur.executeForm(*rrf);
			std::cout << std::endl << std::endl;
			std::cout << bur << std::endl;
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}
	return (0);
}
