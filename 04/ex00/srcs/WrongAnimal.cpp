/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:00:58 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 10:04:12 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << GREEN << "WrongAnimal Default constructor called" << RESET << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	this->type = copy.type;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal Destructor called" << RESET << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << YELLOW << "Möö" << RESET << std::endl;
}
