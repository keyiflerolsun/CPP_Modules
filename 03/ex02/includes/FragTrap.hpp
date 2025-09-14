/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 18:06:57 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 18:09:03 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &copy);
	FragTrap &operator = (const FragTrap &src);
	~FragTrap();

	void attack(const std::string &target);
	void highFivesGuys(void);
};

#endif
