/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:08:40 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 10:09:10 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

int main(void)
{
	const WrongAnimal *meta = new WrongAnimal();
	const WrongAnimal *cati = new WrongCat();

	std::cout << cati->getType() << " " << std::endl;

	cati->makeSound();
	meta->makeSound();

	delete meta;
	delete cati;
	return (0);
}
