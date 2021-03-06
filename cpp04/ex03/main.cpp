/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:16:53 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 16:18:52 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

static void	search_leaks(void)
{
	std::cout << std::endl << std::endl;
	system("leaks interfaces");
}

int	main(void)
{
	atexit(search_leaks);

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl << std::endl;

	ICharacter* me = new Character("me");

	std::cout << std::endl << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << std::endl;
	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << std::endl;
	return (0);
}
