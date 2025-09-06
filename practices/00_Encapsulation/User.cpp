/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:32:57 by osancak           #+#    #+#             */
/*   Updated: 2025/09/06 15:33:27 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"

User::User()
{
	this->age = 0;
}

void User::setAge(int newAge)
{
	if (newAge >= 0)
		this->age = newAge;
}

int User::getAge() const
{
	return (this->age);
}

void User::printAge() const
{
	std::cout << "Kullanicinin yaşı: " << this->getAge() << std::endl;
}
