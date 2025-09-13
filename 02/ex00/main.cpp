/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:01:49 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 11:27:22 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	b.setRawBits(3);

	c = b;

	std::cout << YELLOW << "a: " << a.getRawBits() << RESET << std::endl;
	std::cout << YELLOW << "b: " << b.getRawBits() << RESET << std::endl;
	std::cout << YELLOW << "c: " << c.getRawBits() << RESET << std::endl;

	return (0);
}
