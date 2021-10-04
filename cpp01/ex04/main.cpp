/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:37:51 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 16:12:36 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <iostream>

static int	cpp_error(std::string error)
{
	std::cout << "Error: " << error << std::endl;
	return (1);
}

static int	call_sed(char *argv[])
{
	Sed	sed(argv[1]);
	int	error;

	error = sed.open_src_file();
	if (error == -1)
		return (cpp_error("No se ha encontrado el archivo"));
	error = sed.open_dst_file();
	if (error == -1)
		return (cpp_error("No se puede crear archivo .replace"));
	sed.src_to_dst_file(argv[2], argv[3]);
	return (0);
}

int	main(int argc, char *argv[])
{
	std::string	s1;
	std::string	s2;

	if (argc != 4)
		return (cpp_error("Parametros de entrada incorrectos"));
	return (call_sed(argv));
}
