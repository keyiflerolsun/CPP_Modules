/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:20:45 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 16:56:47 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
{
	std::cout << GREEN << "Default constructor called" << RESET << std::endl;

	this->name 		    = name;
	this->hit_points    = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;

	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << MAGENTA << "Copy assignment operator called" << RESET << std::endl;

	if (this != &src)
	{
		this->name 		    = src.name;
		this->hit_points    = src.hit_points;
		this->energy_points = src.energy_points;
		this->attack_damage = src.attack_damage;
	}

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->energy_points || !this->hit_points)
	{
		std::cout << RED << "ClapTrap "											     << CYAN  << this->name
				  << RED << " has no energy or is already destroyed! Cannot attack." << RESET << std::endl;
		return ;
	}

	this->energy_points--;

	std::cout << YELLOW << "ClapTrap "  		<< CYAN    << this->name
			  << YELLOW << " attacks "  		<< MAGENTA << target
			  << YELLOW << ", causing " 		<< BLUE    << this->attack_damage
			  << YELLOW << " points of damage!" << RESET   << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hit_points)
	{
		std::cout << RED << "ClapTrap " 		     << CYAN  << this->name
				  << RED << " is already destroyed!" << RESET << std::endl;
		return;
	}

	this->hit_points -= amount;

	std::cout << RED << "ClapTrap "      				    << CYAN    << this->name
			  << RED << " takes "        				    << MAGENTA << amount
			  << RED << " points of damage. Remaining HP: " << BLUE    << this->hit_points << RESET << std::endl;

	if (this->hit_points <= 0)
	{
		this->hit_points = 0;
		std::cout << RED << "ClapTrap "            << CYAN  << this->name
				  << RED << " has been destroyed!" << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points == 0 || this->hit_points == 0)
	{
		std::cout << RED << "ClapTrap "										         << CYAN  << this->name
				  << RED << " has no energy or is already destroyed! Cannot repair." << RESET << std::endl;
		return;
	}

	this->energy_points--;
	this->hit_points += amount;

	std::cout << GREEN << "ClapTrap " 			 << CYAN 	<< this->name
			  << GREEN << " repairs itself for " << MAGENTA << amount
			  << GREEN << " points. New HP: "    << BLUE 	<< this->hit_points << RESET << std::endl;
}
