/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:53:15 by osancak           #+#    #+#             */
/*   Updated: 2025/09/08 13:12:07 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string &name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << YELLOW << this->name << MAGENTA << ": " << RED << "Destroyed" << RESET << std::endl;
}

void Zombie::announce(void)
{
	std::cout << YELLOW << this->name << MAGENTA << ": " << GREEN << "BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}
