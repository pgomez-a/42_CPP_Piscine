#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class	Contact
{
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
		int		set;

		Contact(void);
		~Contact(void);
};

#endif
