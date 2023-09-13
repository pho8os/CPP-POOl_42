/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:41:16 by absaid            #+#    #+#             */
/*   Updated: 2023/09/11 15:28:29 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::fracts = 8;
Fixed::Fixed():_fixed(0){std::cout << "Default constructor called" << std::endl;}
Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called " << std::endl;
    _fixed = obj.getRawBits();
    return(*this);
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) 
{ 
    output << obj.toFloat();
    return(output);
}

Fixed::Fixed(const int var)
{
    _fixed = var << fracts;
}
Fixed::Fixed(const float var)
{
    _fixed = roundf( var * std::pow(2, fracts));
}
int Fixed::getRawBits( void ) const
{
    return(std::cout << "getRawBits member function called" << std::endl ,this->_fixed);
}

void Fixed::setRawBits( int const raw )
{
    _fixed = raw;
}

int Fixed::toInt() const
{
    return (_fixed >> fracts);
}

float Fixed::toFloat() const
{
    return((float)_fixed * std::pow(2, fracts * -1));
}

