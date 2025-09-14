/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:06:59 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 18:10:19 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	std::cout << GREEN << "FragTrap Default constructor called" << RESET << std::endl;

	this->name 		    = name;
	this->hit_points    = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << BLUE << "FragTrap Copy constructor called" << RESET << std::endl;

	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << MAGENTA << "FragTrap Copy assignment operator called" << RESET << std::endl;

	if (this != &src)
	{
		this->name 		    = src.name;
		this->hit_points    = src.hit_points;
		this->energy_points = src.energy_points;
		this->attack_damage = src.attack_damage;
	}

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FragTrap Destructor called" << RESET << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (!this->energy_points || !this->hit_points)
	{
		std::cout << RED << "FragTrap "											     << CYAN  << this->name
				  << RED << " has no energy or is already destroyed! Cannot attack." << RESET << std::endl;
		return ;
	}

	this->energy_points--;

	std::cout << YELLOW << "FragTrap "  		<< CYAN    << this->name
			  << YELLOW << " attacks "  		<< MAGENTA << target
			  << YELLOW << ", causing " 		<< BLUE    << this->attack_damage
			  << YELLOW << " points of damage!" << RESET   << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << GREEN << "FragTrap " << CYAN << this->name << GREEN << " high-five guys!" << RESET << std::endl;
}
