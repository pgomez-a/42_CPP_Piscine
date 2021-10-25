/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:32:00 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 17:32:01 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const & intern);
		~Intern(void);

		Intern&	operator=(Intern const & intern);

		Form*	makeForm(std::string const & name, std::string const & target);
};

#endif
