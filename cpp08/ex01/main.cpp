#include "span.hpp"

int	main(void)
{
	{
		std::cout << "WITHOUT RANGE" << std::endl;
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
			sp.showNumbers();
		}
		catch(std::exception & e)
		{
			std::cout << e.what() << std::endl;
			sp.showNumbers();
		}
	}
	{
		std::cout << "WITH    RANGE" << std::endl;
		Span				sp = Span(100000);
		std::list<int>			lst;
		std::list<int>::iterator	beg;
		std::list<int>::iterator	end;

		for (int i = 1; i <= 100000; i++)
			lst.push_back(i);

		beg = lst.begin();
		end = lst.end();
		sp.addNumber(beg, end);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}
