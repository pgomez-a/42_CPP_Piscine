#include "Sed.hpp"

Sed::Sed(std::string file_name)
{
	this->file_name = file_name;
	this->file_replace = file_name;
	this->file_replace = file_replace.append(".replace");
	this->_src_open = 0;
	this->_dst_open = 0;
	return ;
}

Sed::~Sed(void)
{
	if (this->_src_open == 1)
		this->file_src.close();
	if (this->_dst_open == 1)
		this->file_dst.close();
	return ;
}

int	Sed::open_src_file(void)
{
	this->file_src.open(this->file_name);
	if (this->file_src.fail())
		return (-1);
	this->_src_open = 1;
	return (0);
}

int	Sed::open_dst_file(void)
{
	this->file_dst.open(this->file_replace);
	if (file_dst.fail())
		return (-1);
	this->_dst_open = 1;
	return (0);
}

void	Sed::src_to_dst_file(std::string s1, std::string s2)
{
	std::string	data;

	std::getline(this->file_src, data);
	while (!this->file_src.eof())
	{
		this->replace(data, s1, s2);
		this->file_dst << data;
		this->file_dst << "\n";
		data.clear();
		std::getline(this->file_src, data);
	}
	return ;
}

void	Sed::replace(std::string& data, std::string s1, std::string s2)
{
	int	s1_len;
	int	s2_len;
	int	pos;

	s1_len = s1.length();
	s2_len = s2.length();
	pos = data.rfind(s1);
	while (pos >= 0)
	{
		data.erase(pos, s1_len);
		data.insert(pos, s2);
		pos = data.rfind(s1);
	}
	return ;
}
