#include "PhoneBook.hpp"

/**
 ** Constructor of PhoneBook object
 **/

PhoneBook::PhoneBook(void)
{
	this->_total = 0;
	return ;
}

/**
 ** Destructor of PhoneBook object
 **/

PhoneBook::~PhoneBook(void)
{
	return ;
}

/**
 ** Add a contact that will be stored in PhoneBook
 **/

void	PhoneBook::add(void)
{
	std::cout << "Enter your first name: " << std::endl;
	std::getline(std::cin, this->contact[this->_total].firstName);
	std::cout << "Enter your last name: " << std::endl;
	std::getline(std::cin, this->contact[this->_total].lastName);
	std::cout << "Enter your nickname: " << std::endl;
	std::getline(std::cin, this->contact[this->_total].nickname);
	std::cout << "Enter your phone number: " << std::endl;
	std::getline(std::cin, this->contact[this->_total].phoneNumber);
	std::cout << "Enter your darkest secret: " << std::endl;
	std::getline(std::cin, this->contact[this->_total].darkestSecret);
	this->contact[this->_total].set = 1;
	if (this->_total < CONTACT_TOT - 1)
		this->_total++;
	return ;
}

/**
 ** Show all contacts stored in PhoneBook
 **/

static std::string	format_output(std::string str_no_format)
{
	std::string	str_with_format;
	int		count;
	int		len;

	count = 0;
	len = str_no_format.length();
	while (count < 10 - len)
	{
		str_with_format += " ";
		count++;
	}
	str_with_format += str_no_format;
	if (len > 10)
	{
		str_with_format[9] = '.';
		count = 10;
		while (count < len)
			str_with_format[count++] = 0;
	}
	return (str_with_format);
}

void	PhoneBook::search(void) const
{
	int		index;

	index = 0;
	while (index <= this->_total && this->contact[index].set == 1)
	{
		std::cout << "|" << std::setw(10) << index << "|"
			<< format_output(this->contact[index].firstName) << "|"
			<< format_output(this->contact[index].lastName) << "|"
			<< format_output(this->contact[index].nickname)
			<< "|" << std::endl;
		index++;
	}
	if (this->_total > 0)
	{
		std::cout << "Which contact do you want to see? Index:" << std::endl;
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(256,'\n');
			return ;
		}
		if (index >= 0 && (index < this->_total || index == 7))
		{
			std::cout << "First Name: " << this->contact[index].firstName << std::endl;
			std::cout << "Last Name: " << this->contact[index].lastName << std::endl;
			std::cout << "Nickname: " << this->contact[index].nickname << std::endl;
			std::cout << "Phone Number: " << this->contact[index].phoneNumber << std::endl;
			std::cout << "Darkest Secret: " << this->contact[index].darkestSecret << std::endl;
		}
		else
			std::cout << index << " is not a valid index" << std::endl;
		std::cin.ignore(256,'\n');
	}
	return ;
}
