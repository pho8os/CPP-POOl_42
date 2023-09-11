/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:05:40 by absaid            #+#    #+#             */
/*   Updated: 2023/09/11 11:09:03 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
    private:
        int _fixed;
        static const int fracts;
    public:
        Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int var);//TODO
        Fixed(const float var);//TODO
        Fixed &operator=(const Fixed &obj);
        Fixed &operator<<(const Fixed &obj);//TODO
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;//TODO
        int toInt( void ) const;//TODO
};