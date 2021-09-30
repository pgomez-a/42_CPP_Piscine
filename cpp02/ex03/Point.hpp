#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(Fixed x, Fixed y);
		Point(Point const & point);
		~Point(void);

		const Point&	operator=(Point const & point) const;

		Fixed		getX(void) const;
		Fixed		getY(void) const;

	private:
		Fixed const	x;
		Fixed const	y;
};

std::ostream&	operator<<(std::ostream& out, Point const & point);

#endif
