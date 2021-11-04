/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:28:44 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/04 19:25:05 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

/**
 ** Exit the program and output and Error Message
 **/

static int	cpp_error(std::string error)
{
	std::cout << "Error. " << error << std::endl;
	return (1);
}

/**
 ** Check if the input is valid
 ** If the input is valid, then mark the type conversion
 ** 0001 = char | 0010 = int | 0100 = float | 1000 = double
 **/

static char	cpp_parse_input(std::string user)
{
	std::string	inf_float[3] = {"-inff", "+inff", "nanf"};
	std::string	inf_double[3] = {"-inf", "+inf", "nan"};
	char		type;
	int			count;

	count = 0;
	while (count < 3)
	{
		if (inf_float[count] == user)
			return (4);
		else if (inf_double[count] == user)
			return (8);
		count += 1;
	}
	type = 0;
	if (cpp_find_double(user) == 1)
		type = 8;
	else if (cpp_find_float(user) == 1)
		type = 4;
	else if (cpp_find_int(user) == 1)
		type = 2; 
	else if (user.length() == 1)
		type = 1;
	return (type);
}

/**
 ** Check which type has been detected
 ** Call the correspondant function
 **/

static int	cpp_call_detected(char type, std::string user)
{
	int	check;

	check = 0;
	if (type == 1)
		check = cpp_detected_char(user);
	if (type == 2)
		check = cpp_detected_int(user);
	if (type == 4)
		check = cpp_detected_float(user);
	if (type == 8)
		check = cpp_detected_double(user);
	return (check);
}


int	main(int argc, char *argv[])
{
	char	get_type;

	if (argc != 2)
		return (cpp_error("Nº argumentos incorrecto"));
	get_type = cpp_parse_input(argv[1]);
	if (!get_type)
		return (cpp_error("The conversion is impossible"));
	if (!cpp_call_detected(get_type, argv[1]))
		return (cpp_error("The conversion is impossible"));
	return (0);
}
