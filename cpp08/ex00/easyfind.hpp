#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <array>
# include <vector>
# include <list>
# include <map>

template < typename T >
typename T::iterator	easyfind(T& array, int val)
{
	typename T::iterator	it;

	it = std::find(array.begin(), array.end(), val);
	return (it);
}

#endif
