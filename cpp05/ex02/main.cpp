#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <exception>

static void	search_leaks(void)
{
	std::cout << std::endl << std::endl;
	system("leaks bureaucrat");
}

int	main(void)
{
	RobotomyRequestForm	roboto("roboto");

	atexit(search_leaks);
	std::cout << std::endl;

	roboto.makeDrillingNoises();
	

	std::cout << std::endl;
	return (0);
}
