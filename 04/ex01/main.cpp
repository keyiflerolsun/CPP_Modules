/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:11:12 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 11:24:47 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal	*kope = new Dog();
	const Animal	*kedi = new Cat();

	const Animal *adam;


	kedi->setIdea("salam");
	kedi->setIdea("sosis");

	kedi->printIdeas();

	adam = kedi;

	adam->printIdeas();

	delete kope;
	delete kedi; // should not create a leak
	return (0);
}
