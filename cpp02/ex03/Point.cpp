#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	return ; 
}

Point::Point(Point const & x, Point const & y) : x(x), y(y)
{
	return ;
}

Point::Point(Point const & point)
{
	*this = point;
	return ;
}

Point::~Point(void)
{
	return ;
}

Point	Point::operator=(Point const & point)
{
	this->x = point.getX();
	this->y = point.getY();
	return (*this);
}

int	Point::getX(void)
{
	return (this->x);
}

int	Point::getY(void)
{
	return (this->y);
}
