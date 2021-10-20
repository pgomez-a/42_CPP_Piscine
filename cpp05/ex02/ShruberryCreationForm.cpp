#include "ShruberryCreationForm.hpp"

/**
 ** Default Shruberry Constructor
 ** Shruberry Constructor with the target of the Operation
 ** Copy Shruberry Constructor
 **/

ShruberryCreationForm::ShruberryCreationForm(void) : _target("Default")
{
	std::cout << "Shruberry Default Constructor - Private Access Control" << std::endl;
	return ;
}

ShruberryCreationForm::ShruberryCreationForm(std::string const & target) : _target(target)
{
	std::string	file_name;

	std::cout << this->_target
		<< " Shruberry Constructor called" << std::endl;
	file_name = this->_target + "_shruberry";
	this->_output_file.open(file_name, std::fstream::trunc);
	return ;
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const & shruberry) : _target(shruberry.getTarget())
{
	std::string	file_name;

	std::cout << this->_target
		<< " Shruberry Copy Constructor called " << std::endl;
	file_name = this->_target + "_shruberry";
	this->_output_file.open(file_name, std::fstream::trunc);
	return ;
}

/** Default Destructor
 **
 **/

ShruberryCreationForm::~ShruberryCreationForm(void)
{
	std::cout << this->_target
		<< " Shruberry Destructor called" << std::endl;
	this->_output_file.close();
	return ;
}

/**
 ** Assignation Operator Overload
 **/

ShruberryCreationForm&	ShruberryCreationForm::operator=(ShruberryCreationForm const & shruberry)
{
	std::cout << "Does not make sense to assign Shruberry "
		<< shruberry.getTarget() << std::endl;
	return (*this);
}

/**
 ** Return the target of a Shruberry Object
 **/

std::string	ShruberryCreationForm::getTarget(void) const
{
	return (this->_target);
}

/**
 ** Draw trees in _output_file
 **/

void		ShruberryCreationForm::drawTrees(void)
{
	this->_output_file << "         *" << std::endl;
	this->_output_file << "        /|\\" << std::endl;
	this->_output_file << "       /*|O\\" << std::endl;
	this->_output_file << "      /*/|\\*\\" << std::endl;
	this->_output_file << "     /X/O|*\\X\\" << std::endl;
	this->_output_file << "    /*/X/|\\X\\*\\" << std::endl;
	this->_output_file << "   /O/*/X|*\\O\\X\\" << std::endl;
	this->_output_file << "  /*/O/X/|\\X\\O\\*\\" << std::endl;
	this->_output_file << " /X/O/*/X|O\\X\\*\\O\\" << std::endl;
	this->_output_file << "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl;
	this->_output_file << "        |X|" << std::endl;
	this->_output_file << "        |X|" << std::endl;
	this->_output_file << std::endl;
	return ;
}
