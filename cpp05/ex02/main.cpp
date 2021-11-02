/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:15:12 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:13:56 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

static void	search_leaks(void)
{
	std::cout << std::endl << std::endl;
	system("leaks bureaucrat");
}

int	main(void)
{
	atexit(search_leaks);
	{
		Bureaucrat	walle("Wall-E", 5);
		Form*		shrubbery = new ShrubberyCreationForm("home");
		Form*		roboto = new RobotomyRequestForm("roboto");
		Form*		presidential = new PresidentialPardonForm("presidential");

		std::cout << walle << std::endl;
		std::cout << *shrubbery << std::endl;
		std::cout << *roboto << std::endl;
		std::cout << *presidential << std::endl;
		std::cout << std::endl << std::endl;
		walle.signForm(*shrubbery);
		walle.executeForm(*shrubbery);
		walle.signForm(*roboto);
		walle.executeForm(*roboto);
		walle.signForm(*presidential);
		walle.executeForm(*presidential);
		std::cout << std::endl << std::endl;
		std::cout << *shrubbery << std::endl;
		std::cout << *roboto << std::endl;
		std::cout << *presidential << std::endl;

		delete shrubbery;
		delete roboto;
		delete presidential;

	}
	return (0);
}
