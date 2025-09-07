/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:59:09 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 11:27:48 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	Contact		mahmut;
	PhoneBook	phonebook;

	mahmut.setFirstName("Mahmut");
	mahmut.setLastName("Abbas");
	mahmut.setNickName("mabbas");
	mahmut.setPhoneNumber("+90123123123");
	mahmut.setDarkSecret("blabla");
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.addContact(mahmut);
	phonebook.displayContacts();
	phonebook.searchContact(7);
	return (0);
}
