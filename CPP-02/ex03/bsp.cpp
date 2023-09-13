/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:31:01 by absaid            #+#    #+#             */
/*   Updated: 2023/09/13 19:01:53 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed fixabs(const Fixed &value) {
  return value < Fixed(0) ? value * Fixed(-1) : value;
}

Fixed areatriangle(Point a, Point b, Point c) {
  return fixabs(Fixed(0.5F) *
                 (a.getx() * (b.gety() - c.gety()) +
                 b.getx() * (c.gety() - a.gety()) +
                 c.getx() * (a.gety() - b.gety())));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed abpoint(areatriangle(a, b, point));
  Fixed acpoint(areatriangle(a, c, point));
  Fixed bcpoint(areatriangle(b, c, point));
  Fixed abc(areatriangle(a, b, c));
  if (abpoint == 0 || acpoint == 0 || bcpoint == 0 || abc == 0)
    return false;
  return (abpoint + acpoint + bcpoint == abc);
}