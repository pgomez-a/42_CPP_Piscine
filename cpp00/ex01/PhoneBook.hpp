#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

# define CONTACT_TOT 8

class	PhoneBook
{
	public:
		Contact	contact[CONTACT_TOT];

		PhoneBook(void);
		~PhoneBook(void);

		void	add(void);
		void	search(void) const;

	private:
		int	_total;
};

#endif
