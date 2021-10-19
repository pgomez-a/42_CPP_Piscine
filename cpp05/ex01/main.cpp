#include "Bureaucrat.hpp"
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
	try
	{
		Bureaucrat	burOne("Dall-E", 5);
		Bureaucrat	burTwo("Wall-E", 149);

		std::cout << std::endl;
		std::cout << burOne << std::endl;
		std::cout << burTwo << std::endl;
		burOne.incGrade();
		std::cout << burOne << std::endl;
		std::cout << burTwo << std::endl;
		burOne.incGrade();
		std::cout << burOne << std::endl;
		std::cout << burTwo << std::endl;
		burOne.incGrade();
		std::cout << burOne << std::endl;
		std::cout << burTwo << std::endl;
		burTwo.decGrade();
		std::cout << burOne << std::endl;
		std::cout << burTwo << std::endl;
		burTwo.decGrade();
		std::cout << burOne << std::endl;
		std::cout << burTwo << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << std::endl;
		std::cout << "*** EXCEPTION CAUGHT!!! ***" << std::endl;
		std::cout << "Grade out of range" << std::endl;
		std::cout << e.what() << std::endl;
	}
	return (0);
}