/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:05:40 by absaid            #+#    #+#             */
/*   Updated: 2023/09/13 15:08:18 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
    private:
        int _fixed;
        static const int fracts;
    public:
        static Fixed &max(Fixed &a, Fixed &b);
        static  Fixed &max(const Fixed &a, const Fixed &b);
        static Fixed &min(Fixed &a, Fixed &b);
        static  Fixed &min(const Fixed &a, const Fixed &b);
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int var);
        Fixed(const float var);
        Fixed &operator=(const Fixed &obj);
        Fixed operator++(int);
        Fixed &operator++();
        Fixed operator--(int);
        Fixed &operator--();
        Fixed operator+(const Fixed &obj) const;
        Fixed operator-(const Fixed &obj) const;
        Fixed operator*(const Fixed &obj) const;
        Fixed operator/(const Fixed &obj) const;
        bool operator==(const Fixed &obj) const ; 
        bool operator!=(const Fixed &obj) const ; 
        bool operator>(const Fixed &obj) const ; 
        bool operator>=(const Fixed &obj) const ; 
        bool operator<(const Fixed &obj) const ; 
        bool operator<=(const Fixed &obj) const ; 
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat() const;
        int toInt() const;
};
std::ostream &operator<<(std::ostream &output, const Fixed &obj);

