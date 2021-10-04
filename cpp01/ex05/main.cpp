/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:56:52 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 16:00:53 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(void)
{
	Karen	karen;

	karen.complain("INFO");
	karen.complain("INFO");
	karen.complain("NOTHING");
	karen.complain("INFO");
	karen.complain("DEBUG");
	karen.complain("NOTHING");
	karen.complain("WARNING");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return (0);
}
