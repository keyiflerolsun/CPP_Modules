/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:11:46 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 09:55:07 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << GREEN << "Dog Default constructor called" << RESET << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	this->type = copy.type;
}

Dog &Dog::operator = (const Dog &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog Destructor called" << RESET << std::endl;
}

std::string Dog::getType(void) const
{
	return (this->type);
}

void Dog::makeSound(void) const
{
	std::cout << YELLOW << "Hav" << RESET << std::endl;
}
