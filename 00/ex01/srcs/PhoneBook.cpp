/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:58:59 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 14:18:31 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_count = 0;
	this->next_index    = 0;
}

void PhoneBook::addContact(Contact contact)
{
	this->contacts[this->next_index] = contact;
	this->next_index = (this->next_index + 1) % 8;

	if (this->contact_count < 8)
		this->contact_count++;

	std::cout << GREEN << "\nContact added successfully.\n\n" << RESET;
}

bool PhoneBook::displayContacts()
{
	if (!this->contact_count)
	{
		std::cout << RED << "No contacts have been added yet!\n" << RESET;
        return (false);
	}

	std::cout << std::endl;
    std::cout << BOLD_MAGENTA << std::setw(10) << "Index"      << YELLOW << "|" << RESET
              << BOLD_MAGENTA << std::setw(10) << "First Name" << YELLOW << "|" << RESET
              << BOLD_MAGENTA << std::setw(10) << "Last Name"  << YELLOW << "|" << RESET
              << BOLD_MAGENTA << std::setw(10) << "Nickname"   << YELLOW << RESET << std::endl;

    for (int i = 0; i < this->contact_count; i++)
	{
        std::cout << CYAN << std::setw(10) << i                                     << YELLOW << "|" << RESET
                  << CYAN << std::setw(10) << this->contacts[i].getShortFirstName() << YELLOW << "|" << RESET
                  << CYAN << std::setw(10) << this->contacts[i].getShortLastName()  << YELLOW << "|" << RESET
                  << CYAN << std::setw(10) << this->contacts[i].getShortNickName()  << YELLOW << RESET << std::endl;
	}

	return (true);
}

void PhoneBook::searchContact(int index)
{
	if (index < 0 || index >= this->contact_count)
	{
		std::cout << RED << "Invalid index.\n" << RESET;
		return ;
	}
	std::cout << std::endl;
	std::cout << YELLOW << std::left << std::setw(12) << "Index" << " : " << CYAN << index << RESET << std::endl;
	this->contacts[index].printContact();
	std::cout << std::endl;
}
