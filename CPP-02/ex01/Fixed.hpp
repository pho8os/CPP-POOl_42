/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:05:40 by absaid            #+#    #+#             */
/*   Updated: 2023/10/24 10:51:04 by absaid           ###   ########.fr       */
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
        Fixed(const int var);
        Fixed(const float var);
        Fixed &operator=(const Fixed &obj);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat() const;
        int toInt() const;
};
std::ostream &operator<<(std::ostream &output, const Fixed &obj);