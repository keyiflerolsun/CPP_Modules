/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:22:44 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 18:08:17 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << GREEN << "ScavTrap Default constructor called" << RESET << std::endl;

	this->name 		    = name;
	this->hit_points    = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << BLUE << "ScavTrap Copy constructor called" << RESET << std::endl;

	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << MAGENTA << "ScavTrap Copy assignment operator called" << RESET << std::endl;

	if (this != &src)
	{
		this->name 		    = src.name;
		this->hit_points    = src.hit_points;
		this->energy_points = src.energy_points;
		this->attack_damage = src.attack_damage;
	}

	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "ScavTrap Destructor called" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->energy_points || !this->hit_points)
	{
		std::cout << RED << "ScavTrap "											     << CYAN  << this->name
				  << RED << " has no energy or is already destroyed! Cannot attack." << RESET << std::endl;
		return ;
	}

	this->energy_points--;

	std::cout << YELLOW << "ScavTrap "  		<< CYAN    << this->name
			  << YELLOW << " attacks "  		<< MAGENTA << target
			  << YELLOW << ", causing " 		<< BLUE    << this->attack_damage
			  << YELLOW << " points of damage!" << RESET   << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << GREEN << "ScavTrap " << CYAN << this->name << GREEN << " is now in Gate keeper mode!" << RESET << std::endl;
}
