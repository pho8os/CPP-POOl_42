/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:25:11 by absaid            #+#    #+#             */
/*   Updated: 2023/09/14 11:18:43 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const Fixed &x, const Fixed &y):x(x), y(y){}

Point::Point(const Point &p):x(p.getx()), y(p.gety()){}

Point::~Point(){}

Point &Point::operator=(const Point &p)
{
	(void)p;
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


