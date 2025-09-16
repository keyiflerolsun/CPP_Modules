/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:12:10 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 09:51:35 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
  public:
  	Cat();
	Cat(const Cat &copy);
	Cat &operator = (const Cat &src);
	~Cat();

	std::string getType(void) const;
	void 		makeSound(void) const;
};

#endif
