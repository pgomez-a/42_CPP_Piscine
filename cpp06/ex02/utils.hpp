#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include <exception>

class	Base
{
	public:
		virtual	~Base() {};
};

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

/**
 ** utils.cpp
 **/

Base*	generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
