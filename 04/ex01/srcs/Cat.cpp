/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:12:07 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 11:04:57 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << GREEN << "Cat Default constructor called" << RESET << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->type = copy.type;
}

Cat &Cat::operator = (const Cat &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Cat Destructor called" << RESET << std::endl;
	delete this->brain;
}

std::string Cat::getType(void) const
{
	return (this->type);
}

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "Miyav" << RESET << std::endl;
}

void Cat::setIdea(std::string idea) const
{
	this->brain->setIdea(idea);
}

void Cat::printIdeas(void) const
{
	this->brain->printIdeas();
}
