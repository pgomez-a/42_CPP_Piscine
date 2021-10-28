#include "serial.hpp"

/**
 ** Return the parameter in an integer type
 **/

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

/**
 ** Return the raw data to a Data structure
 **/

Data*		deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}
