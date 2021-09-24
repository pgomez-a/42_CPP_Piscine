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
	call_func	functions[4];
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
			(this->*functions[count])();
		count++;
	}
	return ;
}

void	Karen::debug(void)
{
	std::cout
		<< "DEBUG! I love to get extra bacon for my burger. I just love it!"
		<< std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout
		<< "INFO! You don’t put enough!"
		<< std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout
		<< "WARNING! I think I deserve to have some extra bacon for free."
		<< std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout
		<< "ERROR! This is unacceptable, I want to speak to the manager now."
		<< std::endl;
	return ;
}
