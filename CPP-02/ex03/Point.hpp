/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:23:00 by absaid            #+#    #+#             */
/*   Updated: 2023/09/14 11:19:10 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
       const Fixed x;
       const Fixed y;
    public:
        Point();
        Point(const Fixed &x, const Fixed &y);
        Point(const Point &p);
        Point &operator=(const Point &p);
        ~Point();
        const Fixed &getx() const;
        const Fixed &gety() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);