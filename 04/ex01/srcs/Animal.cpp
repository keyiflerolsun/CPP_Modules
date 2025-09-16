/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:11:29 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 09:55:15 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << GREEN << "Animal Default constructor called" << RESET << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &copy)
{
	this->type = copy.type;
}

Animal &Animal::operator = (const Animal &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal Destructor called" << RESET << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << YELLOW << "Möö" << RESET << std::endl;
}
