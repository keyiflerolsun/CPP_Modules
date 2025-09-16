/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:00:55 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 10:02:46 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

# define RED          "\033[0;31m"
# define GREEN        "\033[0;32m"
# define YELLOW       "\033[0;33m"
# define BLUE         "\033[0;34m"
# define MAGENTA      "\033[0;35m"
# define CYAN         "\033[0;36m"
# define RESET        "\033[0m"

class WrongAnimal
{
  protected:
	std::string type;

  public:
  	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator = (const WrongAnimal &src);
	~WrongAnimal();

	std::string getType(void) const;
	void		makeSound(void) const;
};

#endif
