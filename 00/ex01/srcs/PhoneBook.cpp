/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:58:59 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 11:30:35 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

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

	std::cout << "Contact added successfully.\n";
}

void PhoneBook::displayContacts()
{
	std::cout << std::setw(10) << "Index"      << "|"
	          << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name"  << "|"
			  << std::setw(10) << "Nickname"   << std::endl;

	for (int i = 0; i < this->contact_count; i++)
		std::cout << std::setw(10) << i								        << "|"
		          << std::setw(10) << this->contacts[i].getShortFirstName() << "|"
				  << std::setw(10) << this->contacts[i].getShortLastName()  << "|"
				  << std::setw(10) << this->contacts[i].getShortNickName()  << std::endl;
}

void PhoneBook::searchContact(int index)
{
	if (index < 0 || index >= this->contact_count)
	{
		std::cout << "Invalid index.\n";
		return ;
	}
	std::cout << std::left << std::setw(12) << "Index" << " : " << index << std::endl;
	this->contacts[index].printContact();
}
