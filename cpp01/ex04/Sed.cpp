/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:38:45 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 17:15:19 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

/**
 ** Constructor for Sed object
 ** Always takes a name of a file
 **/

Sed::Sed(std::string file_name) : _file_name(file_name), _file_replace(file_name)
{
	this->_file_replace = this->_file_replace.append(".replace");
	this->_src_open = 0;
	this->_dst_open = 0;
	return ;
}

/**
 ** Destructor for Sed object
 **/

Sed::~Sed(void)
{
	if (this->_src_open == 1)
		this->_file_src.close();
	if (this->_dst_open == 1)
		this->_file_dst.close();
	return ;
}

/**
 ** Open source and destiny files to do the replace
 **/

int	Sed::open_src_file(void)
{
	this->_file_src.open(this->_file_name);
	if (this->_file_src.fail())
		return (-1);
	this->_src_open = 1;
	return (0);
}

int	Sed::open_dst_file(void)
{
	this->_file_dst.open(this->_file_replace);
	if (this->_file_dst.fail())
		return (-1);
	this->_dst_open = 1;
	return (0);
}

/**
 ** Move the content from source to destiny doing the replace
 **/

void	Sed::src_to_dst_file(std::string s1, std::string s2)
{
	std::string	data;

	std::getline(this->_file_src, data);
	while (!this->_file_src.eof())
	{
		this->replace(data, s1, s2);
		this->_file_dst << data;
		this->_file_dst << "\n";
		data.clear();
		std::getline(this->_file_src, data);
	}
	this->replace(data, s1, s2);
	this->_file_dst << data;
	data.clear();
	return ;
}

void	Sed::replace(std::string& data, std::string s1, std::string s2)
{
	int			s1_len;
	int			s2_len;
	int			pos;

	s1_len = s1.length();
	s2_len = s2.length();
	if (s1.compare(s2) == 0)
		return ;
	pos = data.rfind(s1);
	while (pos >= 0)
	{
		data.erase(pos, s1_len);
		data.insert(pos, s2);
		pos -= 1;
		if (pos >= 0)
			pos = data.rfind(s1, pos);
	}
	return ;
}
