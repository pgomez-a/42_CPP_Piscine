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

		int		getPos(void) const;
		std::string*	getIdeas(void) const;
		void		setIdeas(std::string ideas);

	private:
		std::string*	_ideas;
		int		_pos;
};

#endif
