/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:01:49 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 12:18:42 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << YELLOW << a << RESET << std::endl;
	std::cout << YELLOW << ++a << RESET << std::endl;
	std::cout << YELLOW << a << RESET << std::endl;
	std::cout << YELLOW << a++ << RESET << std::endl;
	std::cout << YELLOW << a << RESET << std::endl;

	std::cout << YELLOW << b << RESET << std::endl;

	std::cout << YELLOW << Fixed::max(a, b) << RESET << std::endl;

	return (0);
}
