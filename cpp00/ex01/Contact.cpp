/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:45:11 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/09/28 17:41:42 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/**
 ** Constructor of a Contact object
 **/

Contact::Contact(void)
{
	this->_set = 0;
	return ;
}

/**
 ** Destructor of a Contact object
 **/

Contact::~Contact(void)
{
	return ;
}

/**
 ** Functions to modify the private attributes of a Contact object
 **/

void	Contact::setName(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
	return ;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return ;
}

void	Contact::setContactOn(void)
{
	this->_set = 1;
	return ;
}

/**
 ** Functions to get the value of the private attributes of a Contact
 ** object
 **/

std::string	Contact::getName(void)
{
	return (this->_firstName);
}

std::string	Contact::getLastName(void)
{
	return (this->_lastName);
}

std::string	Contact::getNickname(void)
{
	return (this->_nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (this->_darkestSecret);
}

int			Contact::getContactOn(void)
{
	return (this->_set);
}
