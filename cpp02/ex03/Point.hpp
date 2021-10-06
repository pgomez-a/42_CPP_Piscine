/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:53:08 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/06 16:58:14 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(float const x, float const y);
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
