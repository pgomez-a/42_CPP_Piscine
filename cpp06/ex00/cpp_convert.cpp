/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp_convert.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:33:08 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:38:11 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/**
 ** Convert string to char
 ** Do the explicit casts to int, float, double
 **/

int	cpp_detected_char(std::string user)
{
	char	c_elem;
	int		i_elem;
	float	f_elem;
	double	d_elem;

	c_elem = user[0];
	i_elem = static_cast<int>(c_elem);
	f_elem = static_cast<float>(c_elem);
	d_elem = static_cast<double>(c_elem);

	std::cout << "char: '" << c_elem << "'" << std::endl;
	std::cout << "int: " << i_elem << std::endl;
	std::cout << "float: " << f_elem << ".0f" << std::endl;
	std::cout << "double: " << d_elem << ".0" << std::endl;
	return (1);
}

/**
 ** Convert string to int
 ** Do the explicit cast to char, float, double
 **/

int	cpp_detected_int(std::string user)
{
	int		check;
	char	c_elem;
	int		i_elem;
	float	f_elem;
	double	d_elem;

	check = 0;
	if (std::stod(user) >= std::numeric_limits<int>::min()
		&& std::stod(user) <= std::numeric_limits<int>::max())
	{
		check = 1;
		i_elem = std::stoi(user);
		c_elem = static_cast<char>(i_elem);
		f_elem = static_cast<float>(i_elem);
		d_elem = static_cast<double>(i_elem);

		if (i_elem < 0 || i_elem >= 128)
			std::cout << "char: impossible" << std::endl;
		else if (d_elem < 32 || d_elem >= 127 || d_elem != d_elem)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << c_elem << "'" << std::endl;
		std::cout << "int: " << i_elem << std::endl;
		std::cout << "float: " << f_elem << ".0f" << std::endl;
		std::cout << "double: " << d_elem << ".0" << std::endl;
	}
	return (check);
}

/**
 ** Convert string to float
 ** Do the explicit casts to char, int, double
 **/

int	cpp_detected_float(std::string user)
{
	int		check;
	char	c_elem;
	int		i_elem;
	float	f_elem;
	double	d_elem;

	check = 0;

	if (user == "+inff" || user == "-inff" || user == "nanf")
	{
		check = 1;
		if (user == "+inff")
			f_elem = std::numeric_limits<float>::infinity();
		else if (user == "-inff")
			f_elem = -std::numeric_limits<float>::infinity();
		else
			f_elem = std::numeric_limits<float>::quiet_NaN();
	}
	else if (std::stod(user) >= std::numeric_limits<float>::lowest()
		&& std::stod(user) <= std::numeric_limits<float>::max())
	{
		check = 1;
		f_elem = std::stof(user);
	}
	if (check == 1)
	{
		c_elem = static_cast<char>(f_elem);
		i_elem = static_cast<int>(f_elem);
		d_elem = static_cast<double>(f_elem);

		if (f_elem < 0 || f_elem >= 128 || f_elem != f_elem)
			std::cout << "char: impossible" << std::endl;
		else if (d_elem < 32 || d_elem >= 127 || d_elem != d_elem)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << c_elem << "'" << std::endl;
		if (f_elem < std::numeric_limits<int>::lowest()
			|| f_elem > std::numeric_limits<int>::max()
			|| f_elem != f_elem)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i_elem << std::endl;
		if (f_elem - static_cast<float>(i_elem) == 0)
		{
			std::cout << "float: " << f_elem << ".0f" << std::endl;
			std::cout << "double: " << d_elem << ".0" << std::endl;
		}
		else
		{
			std::cout << "float: " << f_elem << "f" << std::endl;
			std::cout << "double: " << d_elem << std::endl;
		}
	}
	return (check);
}

/**
 ** Convert string to double
 ** Do the explicit cast to char, int, float
 **/

int	cpp_detected_double(std::string user)
{
	int		check;
	char	c_elem;
	int		i_elem;
	float	f_elem;
	double	d_elem;

	check = 0;

	if (user == "+inf" || user == "-inf" || user == "nan")
	{
		check = 1;
		if (user == "+inf")
			d_elem = std::numeric_limits<double>::infinity();
		else if (user == "-inf")
			d_elem = -std::numeric_limits<double>::infinity();
		else
			d_elem = std::numeric_limits<double>::quiet_NaN();
	}
	else if (std::stod(user) >= std::numeric_limits<double>::lowest()
		&& std::stod(user) <= std::numeric_limits<double>::max())
	{
		check = 1;
		d_elem = std::stod(user);
	}
	if (check == 1)
	{
		c_elem = static_cast<char>(d_elem);
		i_elem = static_cast<int>(d_elem);
		f_elem = static_cast<float>(d_elem);

		if (d_elem < 0 || d_elem >= 128 || d_elem != d_elem)
			std::cout << "char: impossible" << std::endl;
		else if (d_elem < 32 || d_elem >= 127 || d_elem != d_elem)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << c_elem << "'" << std::endl;
		if (d_elem < std::numeric_limits<int>::lowest()
			|| d_elem > std::numeric_limits<int>::max()
			|| d_elem != d_elem)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i_elem << std::endl;
		if (d_elem < std::numeric_limits<float>::lowest()
			|| d_elem > std::numeric_limits<float>::max())
			std::cout << "float: impossible" << std::endl;
		else if (d_elem - static_cast<double>(i_elem) == 0)
			std::cout << "float: " << f_elem << ".0f" << std::endl;
		else
			std::cout << "float: " << f_elem << "f" << std::endl;
		if (d_elem - static_cast<double>(i_elem) == 0)
			std::cout << "double: " << d_elem << ".0" << std::endl;
		else
			std::cout << "double: " << d_elem << std::endl;
	}
	return (check);
}
