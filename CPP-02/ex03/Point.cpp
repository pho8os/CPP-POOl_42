/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:25:11 by absaid            #+#    #+#             */
/*   Updated: 2023/09/13 18:51:25 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}
Point::Point(const Fixed &x, const Fixed &y):x(x), y(y){}
Point::Point(const Point &p)
{
	*this = p;
}
Point::~Point(){}
Point &Point::operator=(const Point &p)
{
	(&p != this) && (x = p.getx(), y = p.gety(), 0);
	return(*this);
}

const Fixed &Point::getx() const
{
	return(this->x);
}
const Fixed &Point::gety() const
{
	return(this->y);
}

void Point::setx(Fixed const &x)
{
	this->x = x;
}
void Point::sety(Fixed const &y)
{
	this->y = y;
}

