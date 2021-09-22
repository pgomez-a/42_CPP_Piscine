#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std::string level)
{
	call_func	functions [4];
	std::string	book[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		count;

	functions[0] = &Karen::debug;
	functions[1] = &Karen::info;
	functions[2] = &Karen::warning;
	functions[3] = &Karen::error;
	count = 0;
	while (count < 4)
	{
		if (level == book[count])
		{
			while (count < 4)
			{
				(this->*functions[count])();
				count++;
			}
			return ;
		}
		count++;
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "You don’t put enough!" << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable..." << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	return ;
}
