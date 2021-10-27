#include "Convert.hpp"

int	cpp_find_double(std::string user)
{
	int	count;
	int	dot;
	int	number;

	count = 0;
	dot = 0;
	number = 0;
	if(user[count] == '-' || user[count] == '+')
		count += 1;
	while (user[count])
	{
		if (user[count] == '.' && dot == 0)
			dot += 1;
		else if (user[count] < '0' || user[count] > '9')
			return (0);
		else
			number = 1;
		count += 1;
	}
	if (number == 1 && dot == 1)
		return (1);
	return (0);
}

/**
 ** Decide if user input can be handled
 ** as a flaot type
 **/

int	cpp_find_float(std::string user)
{
	int	count;
	int	dot;
	int	number;

	count = 0;
	dot = 0;
	number = 0;
	if (user[count] == '-' || user[count] == '+')
		count += 1;
	while (user[count])
	{
		if (user[count] == '.' && dot == 0)
			dot += 1;
		else if (user[count] < '0' || user[count] > '9')
		{
			if (!(user[count] == 'f' && !user[count + 1]))
				return (0);
		}
		else
			number = 1;
		count += 1;
	}
	if (number == 1 && dot == 1 && user[count - 1] == 'f')
		return (1);
	return (0);
}

/**
 ** Decide if user input can be handled
 ** as an int type
 **/

int	cpp_find_int(std::string user)
{
	int	count;

	count = 0;
	if (user[count] == '-' || user[count] == '+')
		count += 1;
	while (user[count])
	{
		if (user[count] < '0' || user[count] > '9')
			return (0);
		count += 1;
	}
	return (1);
}
