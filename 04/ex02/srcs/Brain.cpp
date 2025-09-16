/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:24:16 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 11:02:23 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain Default constructor called" << RESET << std::endl;
	this->idea_idx = 0;
}

Brain::Brain(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain &Brain::operator = (const Brain &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Brain Destructor called" << RESET << std::endl;
}

void Brain::setIdea(std::string idea)
{
	this->ideas[this->idea_idx++] = idea;
	this->ideas[this->idea_idx] = "\0";
}

void Brain::printIdeas(void)
{
    for (int i = 0; !this->ideas[i].empty(); i++)
        std::cout << this->ideas[i] << std::endl;
}

