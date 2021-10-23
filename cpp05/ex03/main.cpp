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
		Bureaucrat	walle("Wall-E", 40);
		Intern  	someRandomIntern;
		Form*   	rrf;
		Form*		scf;
		Form*		ppf;

		scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		std::cout << std::endl << std::endl;
		walle.signForm(*scf);
		walle.signForm(*rrf);
		walle.signForm(*ppf);
		std::cout << std::endl << std::endl;
		walle.executeForm(*scf);
		walle.executeForm(*rrf);
		walle.executeForm(*ppf);
		std::cout << std::endl;
		std::cout << *scf << std::endl;
		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;

		delete rrf;
		delete scf;
		delete ppf;
	}
	return (0);
}
