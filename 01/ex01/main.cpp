/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:53:20 by osancak           #+#    #+#             */
/*   Updated: 2025/09/08 13:46:52 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
    int     N     = 5;
    Zombie* horde = zombieHorde(N, "Ghoul");

    for (int i = 0; i < N; ++i)
        horde[i].announce();

    delete[] horde;
	return (0);
}
