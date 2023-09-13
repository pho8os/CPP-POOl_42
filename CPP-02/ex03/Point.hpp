/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:23:00 by absaid            #+#    #+#             */
/*   Updated: 2023/09/13 18:50:16 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
    private:
        Fixed x;
        Fixed y;
    public:
        Point();
        Point(const Fixed &x, const Fixed &y);
        Point(const Point &p);
        Point &operator=(const Point &p);
        ~Point();
        const Fixed &getx() const;
        const Fixed &gety() const;
        void setx(Fixed const &x);
        void sety(Fixed const &y);
};
bool bsp( Point const a, Point const b, Point const c, Point const point);