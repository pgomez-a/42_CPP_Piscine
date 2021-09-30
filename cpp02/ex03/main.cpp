#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main( void )
{
	Point const	A(0, 0);
	Point const	B(10, 10);
	Point const	C(13, 1);
	Point const	D(0, -3);

	std::cout << "A(" << A.getX() << "," << A.getY() << ")" << std::endl;
	std::cout << "B(" << B.getX() << "," << B.getY() << ")" << std::endl;
	std::cout << "C(" << C.getX() << "," << C.getY() << ")" << std::endl;

	if (bsp(A, B, C, D))
		std::cout << D << " está dentro del triángulo." << std::endl;
	else
		std::cout << D << " no está dentro del triángulo." << std::endl;
	return (0);
}
