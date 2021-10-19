#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int	main(void)
{
	Bureaucrat	bur("Pablo", 5);

	try
	{
		std::cout << bur << std::endl;
		bur.incGrade();
		bur.incGrade();
		bur.incGrade();
		std::cout << bur << std::endl;
	}
	catch(const char * msg)
	{
		std::string	tmp_msg = msg;

		if (tmp_msg == "low")
			std::cout << "ERROR LOW GRADE" << std::endl;
		else if (tmp_msg == "high")
			std::cout << "ERROR HIGH GRADE" << std::endl;
		else
			std::cout << "UNKNOWN ERROR" << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Exception" << std::endl;
	}
}
