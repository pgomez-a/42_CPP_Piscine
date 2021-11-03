#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class	Array
{
	public:
		Array(void) {
			this->_nelems = 0;
			return ;
		}

		Array(unsigned int n) {
			if (n > 0)
				this->_list = new T[n];
			this->_nelems = n;
			return ;
		}

		Array(Array const & array) {
			this->_nelems = 0;
			*this = array;
			return ;
		}

		~Array(void) {
			if (this->_nelems > 0)
				delete [] this->_list;
			return ;
		}

		Array&	operator=(Array const & array) {
			if (this->_nelems > 0)
				delete [] this->_list;
			this->_nelems = array._nelems;
			if (this->_nelems > 0)
			{
				this->_list = new T[array._nelems];
				for (size_t i = 0; i < this->_nelems; i++)
					this->_list[i] = array._list[i];
			}
			return (*this);
		}

		T&	operator[](size_t index) {
			if (index < 0 || index >= this->_nelems)
				throw std::out_of_range("Index out of range");
			return (this->_list[index]);
		}

		size_t	size(void) const {
			return (_nelems);
		}

	private:
		T*	_list;
		size_t	_nelems;
};

#endif
