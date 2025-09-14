/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:11:12 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 21:22:14 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *dogi = new Dog();
	const Animal *cati = new Cat();

	std::cout << dogi->getType() << " " << std::endl;
	std::cout << cati->getType() << " " << std::endl;

	cati->makeSound(); //will output the cat sound!
	dogi->makeSound();
	meta->makeSound();

	return (0);
}
