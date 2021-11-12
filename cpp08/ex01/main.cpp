/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:25:00 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/12 16:42:05 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <vector>

int	main(void)
{
	{
		std::cout << "GET SPAN" << std::endl;
		Span	sp = Span(5);

		try
		{
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "Longest: ";
			std::cout << sp.longestSpan() << std::endl;
			std::cout << "Shortest: ";
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "Span: ";
			sp.showNumbers();
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
			std::cout << "Span: ";
			sp.showNumbers();
		}
	}
	{
		std::cout << std::endl << "EXPECTED EXCEPTION" << std::endl;
		Span	sp = Span(5);

		try
		{
			sp.addNumber(5);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(11);

			std::cout << sp.longestSpan() << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "Span: ";
			sp.showNumbers();
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
			std::cout << "Span: ";
			sp.showNumbers();
		}
	}
	{
		std::cout << std::endl << "EXPECTED EXCEPTION" << std::endl;
		Span	sp = Span(5);

		try
		{
			sp.addNumber(3);
			sp.shortestSpan();
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
			std::cout << "Span: ";
			sp.showNumbers();
		}
	}
	{
		std::cout << std::endl << "WITH LIST RANGE" << std::endl;
		Span				sp = Span(10000);
		std::list<int>			lst;
		std::list<int>::iterator	beg;
		std::list<int>::iterator	end;

		for (int i = 1; i <= 10000; i++)
			lst.push_back(i);

		beg = lst.begin();
		end = lst.end();
		sp.addNumber(beg, end);
		std::cout << "Shortest: ";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "Longest: ";
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl << "WITH VECT RANGE" << std::endl;
		Span				sp = Span(500);
		std::vector<int>		vct;
		std::vector<int>::iterator	beg;
		std::vector<int>::iterator	end;

		for (int i = 0; i < 500; i++)
			vct.push_back(i);

		beg = vct.begin();
		end = vct.end();
		sp.addNumber(beg, end);
		std::cout << "Shortest: ";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << "Longest: ";
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}
