/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:01:14 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 10:08:13 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << GREEN << "WrongCat Default constructor called" << RESET << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	this->type = copy.type;
}

WrongCat &WrongCat::operator = (const WrongCat &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat Destructor called" << RESET << std::endl;
}

std::string WrongCat::getType(void) const
{
	return (this->type);
}

void WrongCat::makeSound(void) const
{
	std::cout << YELLOW << "Miyav" << RESET << std::endl;
}
