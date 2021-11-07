#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>

template < typename T >
class	MutantStack
{
	public:
		MutantStack(void) {
			return ;
		}

		MutantStack(MutantStack const & mstack) {
			*this = mstack;
			return ;
		}

		~MutantStack(void) {
			return ;
		}

		MutantStack&	operator=(MutantStack const & mstack) {
			MutantStack*			ptr_mstack;
			typename std::list<T>::iterator	beg;

			if (this != &mstack)
			{
				this->_data.clear();
				ptr_mstack = const_cast<MutantStack *>(&mstack);
				beg = ptr_mstack->_data.begin();
				while (beg !=  ptr_mstack->_data.end())
				{
					this->_data.push_back(*beg);
					beg++;
				}
			}
			return (*this);
		}

		bool		empty(void) const {
			return (this->_data.empty());
		}

		size_t		size(void) const {
			return (this->_data.size());
		}

		T		top(void) {
			typename std::list<T>::iterator	beg;
			T				elem;

			beg = this->_data.begin();
			elem = *beg;
			return (elem);
		}

		T const&	top(void) const {
			typename std::list<T>::iterator	beg;
			T				elem;

			beg = this->_data.begin();
			elem = *beg;
			return (elem);
		}

		void		push(T const & val)
		{
			T	elem;

			elem = val;
			this->_data.push_front(elem);
			return ;
		}

		void		pop(void)
		{
			this->_data.pop_front();
			return ;
		}

	private:
		std::list<T>	_data;
};

#endif
