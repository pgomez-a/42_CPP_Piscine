#include "mutantstack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(1);
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << mstack.empty() << std::endl;
	std::cout << mstack.size() << std::endl;
	return (0);
}
