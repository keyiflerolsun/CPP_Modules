/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:20:46 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 18:17:02 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    std::cout << "\n" << MAGENTA << "=== ClapTrap Testleri ===" << RESET << "\n\n";
    ClapTrap clap("Clappy");

    clap.attack("Target1");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n";

    clap.attack("Target2");
    clap.takeDamage(6);
    clap.beRepaired(2);

    std::cout << "\n" << MAGENTA << "=== ScavTrap Testleri ===" << RESET << "\n\n";
    ScavTrap scav("Scavy");

    scav.attack("Enemy1");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "\n" << MAGENTA << "=== FragTrap Testleri ===" << RESET << "\n\n";
    FragTrap frag("Fraggy");

    frag.attack("Boss1");
    frag.takeDamage(30);
    frag.beRepaired(20);
    frag.highFivesGuys();

    std::cout << "\n" << MAGENTA << "=== Destructor Çağrıları ===" << RESET << "\n\n";
    return (0);
}
