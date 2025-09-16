/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:01:20 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 10:03:33 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
  	WrongCat();
	WrongCat(const WrongCat &copy);
	WrongCat &operator = (const WrongCat &src);
	~WrongCat();

	std::string getType(void) const;
	void 		makeSound(void) const;
};

#endif
