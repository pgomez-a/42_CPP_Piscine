#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

/**
 ** Take an array an call a function for each item of the array
 **/

template < typename T >
void	iter(T* addr, size_t len, void (*func)(T &))
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		(*func)(addr[count]);
		count += 1;
	}
}

#endif
