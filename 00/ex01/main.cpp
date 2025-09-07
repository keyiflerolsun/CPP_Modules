/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:59:09 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 16:32:59 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string getCommand(void)
{
	std::string cmd;

	std::cout << CYAN << "» " << RESET;
    if (!std::getline(std::cin, cmd))
    {
        std::cout << BOLD_RED << "\nEOF detected, exiting program.\n" << RESET;
        exit(0);
    }
	return (cmd);
}

void	addContact(PhoneBook *phonebook)
{
	std::string input;
	Contact		contact;

	std::cout << YELLOW << std::setw(18) << "First Name" << ": " << RESET;
	std::getline(std::cin, input);
	if (!contact.setFirstName(input))
	{
		std::cout << RED << "First name is not valid. Aborting ADD.\n" << RESET;
		return ;
	}

	std::cout << YELLOW << std::setw(18) << "Last Name" << ": " << RESET;
	std::getline(std::cin, input);
	if (!contact.setLastName(input))
	{
		std::cout << RED << "Last name is not valid. Aborting ADD.\n";
		return ;
	}

	std::cout << YELLOW << std::setw(18) << "Nickname" << ": " << RESET;
	std::getline(std::cin, input);
	if (!contact.setNickName(input))
	{
		std::cout << RED << "Nickname cannot be empty. Aborting ADD.\n";
		return ;
	}

	std::cout << YELLOW << std::setw(18) << "Phone Number" << ": " << RESET;
	std::getline(std::cin, input);
	if (!contact.setPhoneNumber(input))
	{
		std::cout << RED << "Phone number is not valid. Aborting ADD.\n";
		return ;
	}

	std::cout << YELLOW << std::setw(18) << "Darkest Secret" << ": " << RESET;
	std::getline(std::cin, input);
	if (!contact.setDarkSecret(input))
	{
		std::cout << RED << "Darkest secret cannot be empty. Aborting ADD.\n";
		return ;
	}

	phonebook->addContact(contact);
}

void	searchContact(PhoneBook *phonebook)
{
	std::string input;
	int			index;

	if (!phonebook->displayContacts())
		return ;

	std::cout << BLUE << "\nEnter index to view details: " << RESET;
    if (!std::getline(std::cin, input))
    {
        std::cout << BOLD_RED << "\nEOF detected, exiting program.\n" << RESET;
        exit(0);
    }

	index = std::atoi(input.c_str());
	if (isNumber(input) && index >= 0 && index < 8)
		phonebook->searchContact(index);
	else
		std::cout << RED << "Invalid input for index.\n" << RESET;
}

int	main(void)
{
	PhoneBook	phonebook;

	std::cout << BLUE << "\nWelcome to the PhoneBook Application!\n\n"
			<< CYAN << "Available commands:\n"
			<< GREEN << "  ADD   " << YELLOW << " - " << MAGENTA << "Add a new contact\n"
			<< GREEN << "  SEARCH" << YELLOW << " - " << MAGENTA << "Search contacts by index\n"
			<< GREEN << "  EXIT  " << YELLOW << " - " << MAGENTA << "Exit the program\n\n"
			<< RESET;


	while (true)
	{
		std::string command = getCommand();
		if (command == "EXIT")
		{
			std::cout << BOLD_CYAN << "Exiting program. Goodbye!\n" << RESET;
			break ;
		}
		else if (command == "ADD")
			addContact(&phonebook);
		else if (command == "SEARCH")
			searchContact(&phonebook);
		else
			std::cout << BOLD_MAGENTA << "Invalid command, please try again.\n" << RESET;
	}
	return (0);
}
