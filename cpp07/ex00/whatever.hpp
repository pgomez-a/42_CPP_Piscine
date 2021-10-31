#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

/**
 ** Swap the given arguments
 **/

template< typename T >
void	swap(T & valOne, T & valTwo)
{
	T	valTmp;

	valTmp = valOne;
	valOne = valTwo;
	valTwo = valTmp;
	return ;
}

/**
 ** Return the smallest argument
 **/

template< typename T >
T	min(T const & valOne, T const & valTwo)
{
	return (valOne < valTwo ? valOne : valTwo);
}

/**
 ** Return the biggest argument
 **/

template< typename T >
T	max(T const & valOne, T const & valTwo)
{
	return (valOne > valTwo ? valOne : valTwo);
}

#endif
