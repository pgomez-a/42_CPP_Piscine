#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template < typename T >
class	Array
{
	public:
		Array(void) {
			this->_list = new T[0];
			this->_elems = 0;
			return ;
		}

		Array(unsigned int n) {
			this->_list = new T[n];
			this->_nelems = n;
			return ;
		}

		Array(Array const & array) {
			this->_list = new T[0];
			*this = array;
			return ;
		}

		~Array(void) {
			delete [] this->_list;
			return ;
		}

		Array&	operator=(Array const & array) {
			std::cout << "list: " << _list << std::endl;
			if (this->_list)
				delete [] this->_list;
			this->_list = new T[array._nelems];
			this->_nelems = array._nelems;
			for (size_t i = 0; i < array._nelems; i++)
				this->_list[i] = array._list[i];
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
