/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:22:01 by osancak           #+#    #+#             */
/*   Updated: 2025/09/06 16:40:45 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	printUpperCase(const char *str)
{
	for (int i = 0; str[i]; ++i)
		std::cout << (char)std::toupper(str[i]);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; ++i)
			printUpperCase(av[i]);
	}
	std::cout << '\n';
	return (0);
}
