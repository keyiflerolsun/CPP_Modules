/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:53:33 by osancak           #+#    #+#             */
/*   Updated: 2025/09/08 14:02:31 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string string 	   = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << std::right << std::setw(20) << "string : "    << &string 	 << std::endl;
	std::cout << std::right << std::setw(20) << "stringPTR : " << stringPTR  << std::endl;
	std::cout << std::right << std::setw(20) << "stringREF : " << &stringREF << std::endl;

	std::cout << std::right << std::setw(20) << "string : "    << string     << std::endl;
	std::cout << std::right << std::setw(20) << "stringPTR : " << *stringPTR << std::endl;
	std::cout << std::right << std::setw(20) << "stringREF : " << stringREF  << std::endl;
	return (0);
}
