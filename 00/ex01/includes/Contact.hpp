/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:57:35 by osancak           #+#    #+#             */
/*   Updated: 2025/09/07 14:13:42 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstdlib>
# include <iostream>
# include <iomanip>

# define RED          "\033[0;31m"
# define GREEN        "\033[0;32m"
# define YELLOW       "\033[0;33m"
# define CYAN         "\033[0;36m"
# define MAGENTA      "\033[0;35m"
# define BLUE         "\033[0;34m"
# define BOLD_RED     "\033[1;31m"
# define BOLD_MAGENTA "\033[1;35m"
# define BOLD_CYAN    "\033[1;36m"
# define RESET        "\033[0m"

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
