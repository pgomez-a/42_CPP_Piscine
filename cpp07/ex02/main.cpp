/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:09:15 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/09 11:13:35 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 100

static void	leaks(void)
{
	std::cout << std::endl;
	system("leaks array");
}

int main(int, char**)
{
	Array<int>	numbers(MAX_VAL);
	int* 		mirror = new int[MAX_VAL];

	atexit(leaks);
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int	value = rand();

		numbers[i] = value;
		mirror[i] = value;
	}

	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}

	delete [] mirror;
	return 0;
}

/**
int	main(void)
{
	try
	{
		Array<int>	numbers(MAX_VAL);
		Array<int>	assignation(5);

		srand(time(nullptr));
		atexit(leaks);
		for (int i = 0; i < MAX_VAL; i++)
			numbers[i] = (rand() % 90) + 10;

		Array<int>	copy(numbers);

		assignation = numbers;
		std::cout << "Numbers: " << &numbers << std::endl;
		std::cout << "Assigna: " << &assignation << std::endl;
		std::cout << "Copy:    " << &copy << std::endl;
		std::cout << std::endl;

		std::cout << "NUMBERS" << std::endl;
		for (int i = 1; i <= MAX_VAL; i++)
		{
			std::cout << numbers[i - 1] << " ";
			if (i % 10 == 0)
				std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << "ASSIGNATION" << std::endl;
		for (int i = 1; i <= MAX_VAL; i++)
		{
			std::cout << assignation[i - 1] << " ";
			if (i % 10 == 0)
				std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << "COPY" << std::endl;
		for (int i = 1; i <= MAX_VAL; i++)
		{
			std::cout << copy[i - 1] << " ";
			if (i % 10 == 0)
				std::cout << std::endl;
		}

		std::cout << std::endl << std::endl;
		std::cout << "***** MODIFY *****" << std::endl << std::endl;
		for (int i = 0; i < MAX_VAL; i++)
			assignation[i] = (rand() % 90) + 10;

		std::cout << "NUMBERS" << std::endl;
		for (int i = 1; i <= MAX_VAL; i++)
		{
			std::cout << numbers[i - 1] << " ";
			if (i % 10 == 0)
				std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << "ASSIGNATION" << std::endl;
		for (int i = 1; i <= MAX_VAL; i++)
		{
			std::cout << assignation[i - 1] << " ";
			if (i % 10 == 0)
				std::cout << std::endl;
		}
		std::cout << std::endl << std::endl;

		std::cout << "***** GET LEN *****" << std::endl;
		Array<int>		lenOne(5);
		Array<float>	lenTwo(47);

		std::cout << "Numbers: " << numbers.size() << std::endl;
		std::cout << "Assigna: " << assignation.size() << std::endl;
		std::cout << "Copy:    " << copy.size() << std::endl;
		std::cout << "lenOne:  " << lenOne.size() << std::endl;
		std::cout << "lenTwo:  " << lenTwo.size() << std::endl;
		std::cout << std::endl;

		std::cout << "***** ACCESS BAD INDEX *****" << std::endl;

		numbers[-2];
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
**/
