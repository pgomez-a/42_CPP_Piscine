#include <iostream>

int	main(void)
{
	std::string	stringSTR = "HI THIS IS BRAIN";
	std::string*	stringPTR = &stringSTR;
	std::string&	stringREF = stringSTR;

	std::cout << "stringSTR addr: " << &stringSTR << std::endl;
	std::cout << "stringPTR addr: " << stringPTR << std::endl;
	std::cout << "stringREF addr: " << &stringREF << std::endl;

	std::cout << "stringPTR cont: " << *stringPTR << std::endl;
	std::cout << "stringREF cont: " << stringREF << std::endl;
	return (0);
}
