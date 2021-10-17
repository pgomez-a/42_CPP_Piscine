#include "MateriaSource.hpp"

/**
 ** Default Constructor
 **/

MateriaSource::MateriaSource(void) : idx(0)
{
	std::cout << "Default MateriaSource Constructor has been called"
		<< std::endl;
	return ;
}

/**
 ** Copy Constructor
 **/

MateriaSource::MateriaSource(MateriaSource const & source)
{
	std::cout << "MateriaSource Copy Constructor has been called"
		<< std::endl;
	*this = source;
	return ;
}

/**
 ** Default Destructor
 **/

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Destructor has been called" << std::endl;
	while (this->idx > 0)
	{
		delete this->materia[idx - 1];
		this->materia[idx - 1] = NULL;
		this->idx -= 1;
	}
	return ;
}

/**
 ** Assignation Operator Overload
 **/

MateriaSource&	MateriaSource::operator=(MateriaSource const & source)
{
	while (this->idx > 0)
	{
		delete this->materia[idx - 1];
		this->materia[idx - 1] = NULL;
		this->idx -= 1;
	}
	while (this->idx < source.idx)
	{
		this->materia[this->idx] = source.materia[this->idx]->clone();
		this->idx += 1;
	}
	return (*this);
}

/**
 ** Learn a new Materia
 **/

void		MateriaSource::learnMateria(AMateria* materia)
{
	if (this->idx < 4)
	{
		this->materia[this->idx] = materia;
		this->idx += 1;
	}
	else
		std::cout << "MateriaSource Bag is full :(" << std::endl;
	return ;
}

/**
 ** Create a Materia that has been learned before
 **/

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	AMateria*	materia;
	int		count;
	int		find;

	count = 0;
	find = -1;
	while (count < this->idx)
	{
		if (this->materia[count]->getType() == type)
			find = count;
		count++;
	}
	if (find == -1)
		return (0);
	materia = this->materia[find]->clone();
	return (materia);
}
