/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:59:07 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 16:33:46 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	isNumber(const std::string str)
{
	if (str.empty())
		return (false);

    for (size_t i = 0; i < str.size(); ++i)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}

	return (true);
}

bool Contact::setFirstName(std::string first_name)
{
	if (isNumber(first_name))
		return (false);

	this->first_name = first_name;
	return (true);
}

bool Contact::setLastName(std::string last_name)
{
	if (isNumber(last_name))
		return (false);

	this->last_name = last_name;
	return (true);
}

bool Contact::setNickName(std::string nick_name)
{
	if (nick_name.empty())
		return (false);

	this->nick_name = nick_name;
	return (true);
}

bool Contact::setPhoneNumber(std::string phone_number)
{
	if (!isNumber(phone_number))
		return (false);

	this->phone_number = phone_number;
	return (true);
}

bool Contact::setDarkSecret(std::string dark_secret)
{
	if (dark_secret.empty())
		return (false);

	this->dark_secret = dark_secret;
	return (true);
}

void Contact::printContact(void)
{
	std::cout << std::left << YELLOW << std::setw(12) << "First Name"   << " : " << CYAN << first_name   << std::endl;
	std::cout << std::left << YELLOW << std::setw(12) << "Last Name"    << " : " << CYAN << last_name    << std::endl;
	std::cout << std::left << YELLOW << std::setw(12) << "Nickname"     << " : " << CYAN << nick_name    << std::endl;
	std::cout << std::left << YELLOW << std::setw(12) << "Phone Number" << " : " << CYAN << phone_number << std::endl;
	std::cout << std::left << YELLOW << std::setw(12) << "Dark Secret"  << " : " << CYAN << dark_secret  << std::endl;
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
