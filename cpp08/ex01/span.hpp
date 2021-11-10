#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>

class	Span
{
	public:
		Span(unsigned int N);
		Span(Span const & span);
		~Span(void);

		Span&	operator=(Span const & span);

		void	showNumbers(void);
		void	addNumber(int number);
		int	shortestSpan(void) const;
		int	longestSpan(void) const;

		template < typename T >
		void	addNumber(T& begin, T& end)
		{
			for (; begin != end; begin++)
				this->addNumber(*begin);
			return ;
		}

	private:
		Span(void);
		
		std::list<int>	_data;
		unsigned int	_size;
};

#endif
