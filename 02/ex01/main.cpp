/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:01:49 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 11:53:54 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << YELLOW << "a is " << a << RESET << std::endl;
	std::cout << YELLOW << "b is " << b << RESET << std::endl;
	std::cout << YELLOW << "c is " << c << RESET << std::endl;
	std::cout << YELLOW << "d is " << d << RESET << std::endl;

	std::cout << YELLOW << "a is " << a.toInt() << " as integer" << RESET << std::endl;
	std::cout << YELLOW << "b is " << b.toInt() << " as integer" << RESET << std::endl;
	std::cout << YELLOW << "c is " << c.toInt() << " as integer" << RESET << std::endl;
	std::cout << YELLOW << "d is " << d.toInt() << " as integer" << RESET << std::endl;
	return (0);
}
