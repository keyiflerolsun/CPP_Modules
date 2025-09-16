/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:11:40 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 11:04:47 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
  private:
  	Brain* brain;

  public:
  	Dog();
	Dog(const Dog &copy);
	Dog &operator = (const Dog &src);
	~Dog();

	std::string getType(void) const;
	void 		makeSound(void) const;
	void 		setIdea(std::string idea) const;
	void 		printIdeas(void) const;
};

#endif

