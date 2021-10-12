#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(Brain const & brain);
		~Brain(void);

		Brain&	operator=(Brain const & brain);

		std::string	getIdeas(int pos) const;

	private:
		std::string	_ideas[100];
};

#endif
