/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:20:01 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 17:21:44 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/**
 ** Default Shrubbery Constructor
 ** Shrubbery Constructor with the target of the Operation
 ** Copy Shrubbery Constructor
 **/

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 50, 50), _target("Default")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
	Form("ShruberryCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & shrubbery) :
	Form("ShruberryCreationForm", 145, 137), _target(shrubbery.getTarget())
{
	return ;
}

/** Default Destructor
 **
 **/

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

/**
 ** Assignation Operator Overload
 **/

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & shrubbery)
{
	std::cout << "Does not make sense to assign "
		<< shrubbery.getName() << " to " << this->getName()
		<< std::endl;
	return (*this);
}

/**
 ** Return the target of a Shruberry Object
 **/

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

/**
 ** Draw trees in _output_file
 **/

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	file_name;
	std::ofstream	output_file;

	if (!this->getBoolSigned())
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExec())
		throw Form::GradeTooLowException();
	file_name = this->_target + "_shrubbery";
	output_file.open(file_name, std::fstream::trunc);
	if (output_file.is_open())
	{
		output_file << "         *" << std::endl;
		output_file << "        /|\\" << std::endl;
		output_file << "       /*|O\\" << std::endl;
		output_file << "      /*/|\\*\\" << std::endl;
		output_file << "     /X/O|*\\X\\" << std::endl;
		output_file << "    /*/X/|\\X\\*\\" << std::endl;
		output_file << "   /O/*/X|*\\O\\X\\" << std::endl;
		output_file << "  /*/O/X/|\\X\\O\\*\\" << std::endl;
		output_file << " /X/O/*/X|O\\X\\*\\O\\" << std::endl;
		output_file << "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl;
		output_file << "        |X|" << std::endl;
		output_file << "        |X|" << std::endl;
		output_file << std::endl;
		output_file.close();
	}
	return ;
}
