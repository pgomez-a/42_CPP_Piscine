#include "Point.hpp"

/**
 ** Area of: A(a0, a1) B(b0, b1) C(c0, c1)
 ** A = 1/2 * [ a0(b1 - c1) + b0(c1 - a1) + c0(a1 - b1) ]
 **/

static Fixed	get_area(Point const a, Point const b, Point const c)
{
	Fixed	part_one;
	Fixed	part_two;
	Fixed	part_three;
	Fixed	area(0.5f);

	part_one = a.getX() * (b.getY() - c.getY());
	part_two = b.getX() * (c.getY() - a.getY());
	part_three = c.getX() * (a.getY() - b.getY());
	area = area * (part_one + part_two + part_three);
	if (area < 0)
		area = area * -1;
	return (area);

}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	total_area;
	Fixed	area_one;
	Fixed	area_two;
	Fixed	area_three;

	total_area = get_area(a, b, c);
	area_one = get_area(point, a, b);
	area_two = get_area(point, a, c);
	area_three = get_area(point, b, c);
	if (area_one + area_two + area_three != total_area)
		return (false);
	if (area_one == 0 || area_two == 0 || area_three == 0)
		return (false);
	return (true);
}
