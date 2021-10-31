#include "whatever.hpp"

void	leaks(void)
{
	std::cout << std::endl;
	system("leaks templates");
}

int	main( void )
{
	int a = 2;
	int b = 3;
	
	atexit(leaks);
	std::cout << "BEFORE SWAP" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
	::swap( a, b );
	std::cout << "AFTER SWAP" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "BEFORE SWAP" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;
	::swap(c, d);
	std::cout << "AFTER SWAP" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}