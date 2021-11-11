#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <list>

template < typename T >
class	MutantStack
{
	public:
		MutantStack(void)
		{
			return ;
		}

		MutantStack(MutantStack const & mstack)
		{
			*this = mstack;
			return ;
		}

		~MutantStack(void)
		{
			return ;
		}

		MutantStack&	operator=(MutantStack const & mstack)
		{
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

		bool		empty(void) const
		{
			return (this->_data.empty());
		}

		size_t		size(void) const
		{
			return (this->_data.size());
		}

		T&		top(void)
		{
			return (*(this->_data.begin()));
		}

		T const &	top(void) const
		{
			return (*(this->_data.begin()));
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

		class	iterator
		{
			public:
				iterator(void)
				{
					return ;
				}

				iterator(iterator const & it)
				{
					this->_pointer = it._pointer;
					return ;
				}

				~iterator(void)
				{
					return ;
				}

				iterator&	operator=(iterator const & it)
				{
					this->_pointer = it._pointer;
					return (*this);
				}

				iterator&	operator=(typename std::list<T>::iterator const it)
				{
					this->_pointer = it; 
					return (*this);
				}

				T		operator*(void) const
				{
					return (*(this->_pointer));
				}

				iterator	operator++(int)
				{
					iterator	output;

					output = *this;
					this->_pointer++;
					return (output);
				}

				iterator	operator++(void)
				{
					iterator	output;

					this->_pointer++;
					output = *this;
					return (output);
				}

				iterator	operator--(int)
				{
					iterator	output;

					output = *this;
					this->_pointer--;
					return (output);
				}

				iterator	operator--(void)
				{
					iterator	output;

					this->_pointer--;
					output = *this;
					return (output);
				}

				bool				operator==(iterator const & it)
				{
					if (this->_pointer == it._pointer)
						return (true);
					return (false);
				}

				bool				operator!=(iterator const & it)
				{
					if (this->_pointer != it._pointer)
						return (true);
					return (false);
				}

				bool				operator==(typename std::list<T>::iterator it)
				{
					if (this->_pointer == it)
						return (true);
					return (false);
				}

				bool				operator!=(typename std::list<T>::iterator it)
				{
					if (this->_pointer != it)
						return (true);
					return (false);
				}

				void				setPointer(typename std::list<T>::iterator it)
				{
					this->_pointer = it;
					return ;
				}

				typename std::list<T>::iterator	getPointer(void) const
				{
					return (this->_pointer);
				}

			private:
				typename std::list<T>::iterator	_pointer;
		};

		iterator	begin(void)
		{
			iterator	output;

			output.setPointer(this->_data.begin());
			return (output);
		}

		iterator	end(void)
		{
			iterator	output;

			output.setPointer(this->_data.end());
			return (output);
		}

	private:
		std::list<T>	_data;
};

#endif
