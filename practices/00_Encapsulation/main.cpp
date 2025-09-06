/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:33:37 by osancak           #+#    #+#             */
/*   Updated: 2025/09/06 15:33:46 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "User.hpp"

int	main(void)
{
	User	user;

	user.setAge(25);
	user.printAge();

	user.setAge(-5); // Geçersiz yaş
	user.printAge();

	return (0);
}
