/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:05:37 by osancak           #+#    #+#             */
/*   Updated: 2025/09/09 15:48:07 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

void HumanA::setName(std::string name)
{
	this->name = name;
}
std::string HumanA::getName(void)
{
	return (this->name);
}
void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}

void HumanA::attack(void)
{
	std::cout << CYAN << this->name << YELLOW << " attacks with their " << GREEN << this->weapon.getType() << RESET << std::endl;
}
