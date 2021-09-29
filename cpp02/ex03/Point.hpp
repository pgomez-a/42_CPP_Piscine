#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(Point const & x, Point const & y);
		Point(Point const & point);
		~Point(void);

		Point	operator=(Point const & point);

		int	getX();
		int	getY();
	private:
		Fixed const	x;
		Fixed const	y;
};

#endif
