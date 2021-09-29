/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:47:20 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/09/28 17:48:56 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::string	store_input;

	std::cout << "Enter your first name: " << std::endl;
	std::getline(std::cin, store_input);
	this->contact[this->_total].setName(store_input);
	std::cout << "Enter your last name: " << std::endl;
	std::getline(std::cin, store_input);
	this->contact[this->_total].setLastName(store_input);
	std::cout << "Enter your nickname: " << std::endl;
	std::getline(std::cin, store_input);
	this->contact[this->_total].setNickname(store_input);
	std::cout << "Enter your phone number: " << std::endl;
	std::getline(std::cin, store_input);
	this->contact[this->_total].setPhoneNumber(store_input);
	std::cout << "Enter your darkest secret: " << std::endl;
	std::getline(std::cin, store_input);
	this->contact[this->_total].setDarkestSecret(store_input);
	this->contact[this->_total].setContactOn();
	if (this->_total < CONTACT_TOT - 1)
		this->_total++;
	else
		this->_total = 0;
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

void	PhoneBook::search(void)
{
	int		index;

	index = 0;
	while (index < CONTACT_TOT && this->contact[index].getContactOn() == 1)
	{
		std::cout << "|" << std::setw(10) << index << "|"
			<< format_output(this->contact[index].getName()) << "|"
			<< format_output(this->contact[index].getLastName()) << "|"
			<< format_output(this->contact[index].getNickname())
			<< "|" << std::endl;
		index++;
	}
	if (this->contact[0].getContactOn() == 1)
	{
		std::cout << "Which contact do you want to see? Index:" << std::endl;
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(256,'\n');
			return ;
		}
		if (index >= 0 && index < CONTACT_TOT && this->contact[index].getContactOn() == 1)
		{
			std::cout << "First Name: " << this->contact[index].getName() << std::endl;
			std::cout << "Last Name: " << this->contact[index].getLastName() << std::endl;
			std::cout << "Nickname: " << this->contact[index].getNickname() << std::endl;
			std::cout << "Phone Number: " << this->contact[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << this->contact[index].getDarkestSecret() << std::endl;
		}
		else
			std::cout << index << " is not a valid index" << std::endl;
		std::cin.ignore(256,'\n');
	}
	return ;
}
