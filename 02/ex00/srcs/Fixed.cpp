/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:02:13 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 10:45:24 by osancak          ###   ########.fr       */
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

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << CYAN << "getRawBits member function called" << RESET << std::endl;
	return (this->fixed_point);
}
