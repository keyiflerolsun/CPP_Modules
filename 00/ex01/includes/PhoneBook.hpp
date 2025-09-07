/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:56:52 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 11:17:39 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
  private:
	Contact contacts[8];
	int contact_count;
	int next_index;

  public:
	PhoneBook();

	void addContact(Contact contact);
	void displayContacts();
	void searchContact(int index);
};

#endif
