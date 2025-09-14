/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:20:46 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 17:32:00 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap a("A");

    for (int i = 0; i < 2; i++)
    {
        a.attack("b");
        a.takeDamage(3);
        a.beRepaired(2);
    }

    std::cout << std::endl;

    ScavTrap scav("C");
    scav.attack("d");
    scav.takeDamage(40);
    scav.beRepaired(10);
    scav.guardGate();

    return 0;
}
