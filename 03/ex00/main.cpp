/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:20:46 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 17:19:51 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a = ClapTrap("A");

	for (int i = 0; i < 4; i++)
	{
		a.attack("b");
		a.takeDamage(3);
		a.attack("b");
		a.beRepaired(2);
	}

	return (0);
}
