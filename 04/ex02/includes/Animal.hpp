/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:11:22 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 11:39:41 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RED          "\033[0;31m"
# define GREEN        "\033[0;32m"
# define YELLOW       "\033[0;33m"
# define BLUE         "\033[0;34m"
# define MAGENTA      "\033[0;35m"
# define CYAN         "\033[0;36m"
# define RESET        "\033[0m"

class Animal
{
  protected:
	std::string type;

  public:
  	Animal();
	Animal(const Animal &copy);
	Animal &operator = (const Animal &src);
	virtual ~Animal();

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
	virtual void 	setIdea(std::string idea) const = 0;
	virtual void 	printIdeas(void) const = 0;
};

#endif
