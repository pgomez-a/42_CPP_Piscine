#include "Character.hpp"

/**
 ** Default Protected Constructor
 **/

Character::Character(void)
{
	std::cout << "Default Constructor - Protected Access Control" << std::endl;
	this->name = "character";
	this->idx = 0;
	return ;
}

/**
** Constructor that receives a name
** Copy Constructor
**/

Character::Character(std::string const & name)
{
	std::cout << "Character Constructor called " << name
		<< " has been created" << std::endl;
	this->name = name;
	this->idx = 0;
	return ;
}

Character::Character(Character const & character)
{
	std::cout << "Character Copy Constructor calledv"
		<< character.getName() << " has been called" << std::endl;
	*this = character;
	return ;
}

/**
** Default Destructor
**/

Character::~Character(void)
{
	std::cout << this->name << " has been deleted" << std::endl;
	while (this->idx > 0)
	{
		delete this->materia[this->idx - 1];
		this->materia[this->idx - 1] = NULL;
		this->idx -= 1;
	}
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Character&	Character::operator=(Character const & character)
{
	this->name = character.getName();
	while (this->idx > 0)
	{
		delete this->materia[this->idx - 1];
		this->materia[this->idx - 1] = NULL;
		this->idx -= 1;
	}
	if (character.idx >= 1)
	{
		while (this->idx < character.idx)
		{
			this->idx += 1;
			this->materia[this->idx - 1]
				= character.materia[this->idx - 1]->clone();
		}
	}
	return (*this);
}

/**
 ** Get the name of a Character object
 **/

std::string const &	Character::getName(void) const
{
	return (this->name);
}

/**
 ** Equip a materia into Character object
 **/

void			Character::equip(AMateria* m)
{
	if (m && this->idx < 4)
	{
		this->idx += 1;
		this->materia[this->idx - 1] = m;
		std::cout << "Success. Materia has been equiped" << std::endl;
	}
	else if (!m)
		std::cout << "Error. Trying to equip a nonexistent materia" << std::endl;
	else
		std::cout << "Error. Materia Bag is full" << std::endl;
	return ;
}

/**
 ** Unequip a materia of a Character object
 **/

void			Character::unequip(int idx)
{
	if (this->idx > 0 && idx >= 0 && idx < this->idx)
	{
		while (idx < this->idx - 1)
		{
			this->materia[idx] = this->materia[idx + 1];
			idx += 1;
		}
		this->materia[this->idx - 1] = NULL;
		this->idx -= 1;
		std::cout << "Success. Materia has been unequiped" << std::endl;
	}
	else
		std::cout << "Error. Trying no unequip a nonexistent materia" << std::endl;
	return ;
}

/**
 ** Call the specific use() of a certain Materia object
 **/

void			Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && idx < this->idx)
		this->materia[idx]->use(target);
	else
		std::cout << "Slot " << idx << " is not occupied :(" << std::endl;
	return ;
}
