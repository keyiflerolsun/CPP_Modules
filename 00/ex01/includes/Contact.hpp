/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:57:35 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 11:17:33 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string dark_secret;

  public:
	bool setFirstName(std::string first_name);
	bool setLastName(std::string last_name);
	bool setNickName(std::string nick_name);
	bool setPhoneNumber(std::string phone_number);
	bool setDarkSecret(std::string dark_secret);
	void printContact(void);
	std::string getShortFirstName(void);
	std::string getShortLastName(void);
	std::string getShortNickName(void);
};

#endif
