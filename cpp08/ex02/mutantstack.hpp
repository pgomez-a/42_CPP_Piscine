#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>

template < typename T, typename Container = std::deque<T> >	
class	MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(void) : std::stack<T, Container>() {}
		MutantStack(MutantStack const & mstack) : std::stack<T, Container>(mstack) {}
		MutantStack(std::stack<T> const & stack) : std::stack<T, Container>(stack) {}
		virtual ~MutantStack(void) {}


		typedef typename std::stack<T, Container>::container_type::iterator iterator;

		iterator	begin(void)
		{
			return (std::begin(std::stack<T, Container>::c));
		}

		iterator const	begin(void) const
		{
			return (std::begin(std::stack<T, Container>::c));
		}

		iterator	end(void)
		{
			return (std::end(std::stack<T, Container>::c));
		}

		iterator const	end(void) const
		{
			return (std::end(std::stack<T, Container>::c));
		}

};

#endif
