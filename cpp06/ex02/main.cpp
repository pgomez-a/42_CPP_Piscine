#include "utils.hpp"

/**
 ** Search for leaks
 **/

static void	leaks(void)
{
	std::cout << std::endl;
	system("leaks identify");
}

int	main(void)
{
	Base*	base_pt = generate();
	Base&	base_rf = *base_pt;

	atexit(leaks);
	identify(base_pt);
	identify(base_rf);
	delete base_pt;
	return (0);
}
