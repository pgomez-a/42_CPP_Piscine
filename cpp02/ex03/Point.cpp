/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:53:00 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/06 17:04:33 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**
 ** Default constructor for a Point object ~ Canonical form
 ** Constructor with a coordinate for the Point object
 ** Copy constructor ~ Canonical form
 **/

Point::Point(void) : x(0), y(0)
{
	return ;
}

Point::Point(float const x, float const y) : x(x), y(y)
{
	return ;
}

Point::Point(Point const & point)
{
	*this = point;
	return ;
}

/**
 ** Destructor for a Point object
 **/

Point::~Point(void)
{
	return ;
}

/**
 ** Overload Assignation Operator ~ Canonical form
 ** Since x and y are const, it does not change anything
 **/

const Point&	Point::operator=(Point const & point) const
{
	Fixed	*tmp_x;
	Fixed	*tmp_y;

	tmp_x = (Fixed *) &this->x;
	tmp_y = (Fixed *) &this->y;
	*tmp_x = point.getX();
	*tmp_y = point.getY();
	return (*this);
}

/**
 ** Get the value of x and y coordinates
 **/

Fixed	Point::getX(void) const
{
	return (this->x);
}

Fixed	Point::getY(void) const
{
	return (this->y);
}

/**
 ** Output the coordinates of a Point object
 **/

std::ostream&	operator<<(std::ostream& out, Point const & point)
{
	out << "(" << point.getX() << "," << point.getY() << ")";
	return (out);
}
