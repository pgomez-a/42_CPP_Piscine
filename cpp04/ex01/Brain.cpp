#include "Brain.hpp"

/**
 ** Default Constructor
 ** Copy Constructor
 **/

Brain::Brain(void)
{
	std::cout << "Brain Constructor has been called :)" << std::endl;
	return ;
}

Brain::Brain(Brain const & brain)
{
	std::cout << "Brain Copy Constructor has been called :)" << std::endl;
	*this = brain;
	return ;
}

/**
 ** Default Destructor
 **/

Brain::~Brain(void)
{
	std::cout << "Brain Destructor has been called :(" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Brain&	Brain::operator=(Brain const & brain)
{
	int	count;

	count = 0;
	while (count < 100)
	{
		this->_ideas[count] = brain.getIdeas(count);
		count++;
	}
	return (*this);
}

/**
 ** Get ideas of Brain object
 **/

std::string	Brain::getIdeas(int pos) const
{
	return (this->_ideas[pos]);
}
