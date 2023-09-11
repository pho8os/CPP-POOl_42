/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:03:42 by absaid            #+#    #+#             */
/*   Updated: 2023/09/11 10:53:52 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
int Fixed::getRawBits( void ) const
{
    return(std::cout << "getRawBits member function called" << std::endl ,this->_fixed);
}

void Fixed::setRawBits( int const raw )
{
    _fixed = raw;
}