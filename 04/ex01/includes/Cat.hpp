/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:12:10 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 11:04:49 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
  private:
  	Brain* brain;

  public:
  	Cat();
	Cat(const Cat &copy);
	Cat &operator = (const Cat &src);
	~Cat();

	std::string getType(void) const;
	void 		makeSound(void) const;
	void 		setIdea(std::string idea) const;
	void 		printIdeas(void) const;
};

#endif
