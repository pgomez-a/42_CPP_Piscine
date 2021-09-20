#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	yellow_book;
	std::string	cmd;

	std::cout << "What do you want to do? " << std::endl;
	std::getline(std::cin, cmd);
	while (cmd.compare("EXIT") != 0)
	{
		if (cmd.compare("ADD") == 0)
			yellow_book.add();
		else if (cmd.compare("SEARCH") == 0)
			yellow_book.search();
		std::cout << "What do you want to do? " << std::endl;
		std::getline(std::cin, cmd);
	}
	return (0);
}
