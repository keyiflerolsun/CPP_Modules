/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:59:07 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 11:30:16 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

bool Contact::setFirstName(std::string first_name)
{
	this->first_name = first_name;
	return (true);
}

bool Contact::setLastName(std::string last_name)
{
	this->last_name = last_name;
	return (true);
}

bool Contact::setNickName(std::string nick_name)
{
	this->nick_name = nick_name;
	return (true);
}

bool Contact::setPhoneNumber(std::string phone_number)
{
	this->phone_number = phone_number;
	return (true);
}

bool Contact::setDarkSecret(std::string dark_secret)
{
	this->dark_secret = dark_secret;
	return (true);
}

void Contact::printContact(void)
{
	std::cout << std::left << std::setw(12) << "First Name"   << " : " << first_name   << std::endl;
	std::cout << std::left << std::setw(12) << "Last Name"    << " : " << last_name    << std::endl;
	std::cout << std::left << std::setw(12) << "Nickname"     << " : " << nick_name    << std::endl;
	std::cout << std::left << std::setw(12) << "Phone Number" << " : " << phone_number << std::endl;
	std::cout << std::left << std::setw(12) << "Dark Secret"  << " : " << dark_secret  << std::endl;
}

std::string truncateField(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

std::string Contact::getShortFirstName()
{
	return (truncateField(this->first_name));
}

std::string Contact::getShortLastName()
{
	return (truncateField(this->last_name));
}

std::string Contact::getShortNickName()
{
	return (truncateField(this->nick_name));
}
