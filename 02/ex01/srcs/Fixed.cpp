/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:02:13 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 11:44:59 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << MAGENTA << "Copy assignment operator called" << RESET << std::endl;
	if (this != &src)
		this->fixed_point = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << GREEN << "Int constructor called" << RESET << std::endl;
	this->fixed_point = n << binary_point;
}

Fixed::Fixed(const float f)
{
	std::cout << GREEN << "Float constructor called" << RESET << std::endl;
	this->fixed_point = roundf(f * (1 << binary_point));
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << CYAN << "getRawBits member function called" << RESET << std::endl;
	return (this->fixed_point);
}

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
