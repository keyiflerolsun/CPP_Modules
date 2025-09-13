/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:02:13 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 12:24:10 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Orthodox Canonical Form
Fixed::Fixed()
{
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->fixed_point = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

// Type Specific Constructors
Fixed::Fixed(const int n)
{
	this->fixed_point = n << binary_point;
}

Fixed::Fixed(const float f)
{
	this->fixed_point = roundf(f * (1 << binary_point));
}

// Setter / Getter
void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->fixed_point);
}

// Conversion Methods
float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point / (1 << binary_point));
}

int Fixed::toInt(void) const
{
	return (this->fixed_point >> binary_point);
}

// << Operator overload
std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
	stream << fixed.toFloat();
	return (stream);
}

// Comparison operators
bool Fixed::operator>(const Fixed &src) const
{
	return (this->fixed_point > src.fixed_point);
}

bool Fixed::operator<(const Fixed &src) const
{
	return (this->fixed_point < src.fixed_point);
}

bool Fixed::operator>=(const Fixed &src) const
{
	return (this->fixed_point >= src.fixed_point);
}

bool Fixed::operator<=(const Fixed &src) const
{
	return (this->fixed_point <= src.fixed_point);
}

bool Fixed::operator==(const Fixed &src) const
{
	return (this->fixed_point == src.fixed_point);
}

bool Fixed::operator!=(const Fixed &src) const
{
	return (this->fixed_point != src.fixed_point);
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &src) const
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed Fixed::operator-(const Fixed &src) const
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed Fixed::operator*(const Fixed &src) const
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed Fixed::operator/(const Fixed &src) const
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

// Increment/Decrement
Fixed &Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;
	this->fixed_point++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	this->fixed_point--;
	return (temp);
}

// Min/Max functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}
