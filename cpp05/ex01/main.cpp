/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:34:17 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:08:10 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

static void	search_leaks(void)
{
	std::cout << std::endl << std::endl;
	system("leaks bureaucrat");
}

int	main(void)
{
	Bureaucrat	burOne("Dall-E", 19);
	Bureaucrat	burTwo("Wall-E", 100);
	Form		formOne("PaperOne", 50, 50);
	Form		formTwo("PaperTwo", 2, 5);

	atexit(search_leaks);
	std::cout << burOne << std::endl;
	std::cout << burTwo << std::endl;
	std::cout << formOne << std::endl;
	std::cout << formTwo << std::endl;
	std::cout << std::endl;
	burTwo.signForm(formOne);
	burOne.signForm(formOne);
	burTwo.signForm(formOne);
	burOne.signForm(formOne);

	std::cout << std::endl;
	burTwo.signForm(formTwo);
	burOne.signForm(formTwo);

	std::cout << std::endl;
	std::cout << formOne << std::endl;
	std::cout << formTwo << std::endl;
	std::cout << std::endl;
	return (0);
}
