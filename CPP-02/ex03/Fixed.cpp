/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absaid <absaid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:41:16 by absaid            #+#    #+#             */
/*   Updated: 2023/10/24 10:52:34 by absaid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::fracts = 8;

Fixed::Fixed() : _fixed(0) {}

Fixed::Fixed(const Fixed &obj) { *this = obj; }

Fixed::~Fixed() {}

Fixed &Fixed::operator=(const Fixed &obj) {
  if (&obj != this)
    _fixed = obj.getRawBits();
  return (*this);
}

Fixed &Fixed::operator++() { return (this->_fixed++, *this); }

Fixed Fixed::operator++(int) {
  Fixed old = *this;
  return (this->_fixed++, old);
}

Fixed &Fixed::operator--() { return (this->_fixed--, *this); }

Fixed Fixed::operator--(int) {
  Fixed old = *this;
  return (this->_fixed--, old);
}

Fixed Fixed::operator+(const Fixed &obj) const {
  Fixed plus;
  return (plus._fixed = _fixed + obj._fixed, plus);
}

Fixed Fixed::operator-(const Fixed &obj) const {
  Fixed minus;
  return (minus._fixed = _fixed - obj._fixed, minus);
}

Fixed Fixed::operator*(const Fixed &obj) const {
  Fixed multip;
  return (multip._fixed = (_fixed * obj._fixed) >> fracts, multip);
}

Fixed Fixed::operator/(const Fixed &obj) const {
  Fixed div;
  return (div._fixed =
              roundf(((float)_fixed / obj._fixed) * (1 << fracts)),
          div);
}

bool Fixed::operator==(const Fixed &obj) const {
  return (_fixed == obj._fixed);
}

bool Fixed::operator!=(const Fixed &obj) const {
  return (_fixed != obj._fixed);
}

bool Fixed::operator>(const Fixed &obj) const { return (_fixed > obj._fixed); }

bool Fixed::operator>=(const Fixed &obj) const {
  return (_fixed >= obj._fixed);
}

bool Fixed::operator<(const Fixed &obj) const { return (_fixed < obj._fixed); }

bool Fixed::operator<=(const Fixed &obj) const {
  return (_fixed <= obj._fixed);
}

std::ostream &operator<<(std::ostream &output, const Fixed &obj) {
  return (output << obj.toFloat(), output);
}

Fixed::Fixed(const int var) { _fixed = var << fracts; }

Fixed::Fixed(const float var) { _fixed = roundf(var * (1 << fracts)); }

int Fixed::getRawBits(void) const { return (this->_fixed); }

void Fixed::setRawBits(int const raw) { _fixed = raw; }

int Fixed::toInt() const { return (_fixed >> fracts); }

float Fixed::toFloat() const {
  return ((float)_fixed / (1 << fracts));
}

Fixed &Fixed::max(Fixed &a, Fixed &b) { return ((a > b) ? a : b); }

Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  return (Fixed &)((a > b) ? a : b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) { return ((a > b) ? b : a); }

Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  return (Fixed &)((a > b) ? b : a);
}