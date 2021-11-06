#include "easyfind.hpp"

int	main(void)
{
	{
		std::cout << "ARRAY OF INT" << std::endl;

		std::array<int, 4>	arra = {9, 2, 3, 4};

		std::cout << "9 --> ";
		if (easyfind(arra, 9) == arra.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
		std::cout << "4 --> ";
		if (easyfind(arra, 4) == arra.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
		std::cout << "7 --> ";
		if (easyfind(arra, 7) == arra.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
	}
	{
		std::cout << std::endl << "VECTOR OF INT" << std::endl;

		std::vector<int>	vect;

		vect.push_back(9);
		vect.push_back(2);
		vect.push_back(3);
		vect.push_back(4);

		std::cout << "9 --> ";
		if (easyfind(vect, 9) == vect.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
		std::cout << "4 --> ";
		if (easyfind(vect, 4) == vect.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
		std::cout << "7 --> ";
		if (easyfind(vect, 7) == vect.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
	}
	{
		std::cout << std::endl << "LIST OF INT" << std::endl;

		std::list<int>	lst;

		lst.push_back(9);
		lst.push_back(2);
		lst.push_back(3);
		lst.push_back(4);

		std::cout << "9 --> ";
		if (easyfind(lst, 9) == lst.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
		std::cout << "4 --> ";
		if (easyfind(lst, 4) == lst.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
		std::cout << "7 --> ";
		if (easyfind(lst, 7) == lst.end())
			std::cout << "Not Found" << std::endl;
		else
			std::cout << "Found" << std::endl;
	}
	return (0);
}
