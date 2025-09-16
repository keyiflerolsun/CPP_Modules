/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 10:24:13 by osancak           #+#    #+#             */
/*   Updated: 2025/09/16 10:59:25 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
  private:
	std::string ideas[100];
	int 		idea_idx;;

  public:
  	Brain();
	Brain(const Brain &copy);
	Brain &operator = (const Brain &src);
	~Brain();

	void setIdea(std::string idea);
	void printIdeas(void);
};

#endif
