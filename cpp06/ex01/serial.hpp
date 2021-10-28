#ifndef SERIAL_HPP
# define SERIAL_HPP

# include <iostream>

typedef struct data_s
{
	std::string	strOne;
	int		intOne;
	std::string	strTwo;
}	Data;

uintptr_t	serialize(Data *ptr);
Data*		deserialize(uintptr_t raw);

#endif
