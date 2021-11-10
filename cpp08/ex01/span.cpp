#include "span.hpp"

/**
 ** Default Constructor ~ Canonical Form
 ** Constructor with vector max size
 ** Copy Constructor ~ Deep Copy
 **/

Span::Span(void) : _size(0)
{
	return ;
}

Span::Span(unsigned int N) : _size(N)
{
	return ;
}

Span::Span(Span const & span)
{
	*this = span;
	return ;
}

/**
 ** Default Desctructor ~ Canonical Form
 **/

Span::~Span(void)
{
	return ;
}

/**
 ** Assignation Operator Overload ~ Deep Copy
 **/

Span&	Span::operator=(Span const & span)
{
	Span*				ptr_span;
	std::list<int>::iterator	it;

	if (this != &span)
	{
		this->_data.clear();
		this->_size = span._size;
		ptr_span = const_cast<Span *>(&span);
		it = ptr_span->_data.begin();
		while (it != ptr_span->_data.end())
		{
			this->_data.push_back(*it);
			it++;
		}
	}
	return (*this);
}

/**
 ** Add a single number to the Span class
 ** If the array is full, then throw an exception
 **/

void	Span::addNumber(int number)
{
	if (this->_data.size() == this->_size)
		throw std::out_of_range("Span is already full");
	this->_data.push_back(number);
	return ;
}

/**
 ** Show the numbers that there are in Span
 **/

void	Span::showNumbers(void)
{
	std::list<int>::iterator	it;

	it = this->_data.begin();
	while(it != this->_data.end())
	{
		std::cout << *it << "  ";
		it++;
	}
	std::cout << std::endl;
}

/**
 ** Find the shortest span between all the numbers contained in Span
 **/

int	Span::shortestSpan(void) const
{
	std::list<int>			tmp;
	std::list<int>::iterator	beg;
	std::list<int>::iterator	next;
	int				span;

	if (this->_data.size() < 2)
		throw std::runtime_error("Span has less than two elements");
	tmp = this->_data;
	tmp.sort();
	beg = tmp.begin();
	next = tmp.begin();
	next++;
	span = *next - *beg;
	while (next != tmp.end())
	{
		if (*next - *beg < span)
			span = *next - *beg;
		beg++;
		next++;
	}
	return (span);
}

/**
 ** Find the longest span between all the numbers contained in Span
 **/

int	Span::longestSpan(void) const
{
	std::list<int>	tmp;

	if (this->_data.size() < 2)
		throw std::runtime_error("Span has less than two elements");
	tmp = this->_data;
	tmp.sort();
	return (static_cast<int>(tmp.back() - tmp.front()));
}
