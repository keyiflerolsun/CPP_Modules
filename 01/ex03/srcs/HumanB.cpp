/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:05:40 by osancak           #+#    #+#             */
/*   Updated: 2025/09/09 15:51:14 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void HumanB::setName(std::string name)
{
	this->name = name;
}
std::string HumanB::getName(void)
{
	return (this->name);
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void HumanB::attack(void)
{
    if (this->weapon)
        std::cout << CYAN << this->name << BLUE << " attacks with their " << GREEN << this->weapon->getType() << RESET << std::endl;
    else
        std::cout << CYAN << this->name << BLUE << " has no weapon to attack with!" << std::endl;
}
