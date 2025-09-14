/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:22:41 by osancak           #+#    #+#             */
/*   Updated: 2025/09/14 17:33:04 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator = (const ScavTrap &src);
	~ScavTrap();

	void attack(const std::string &target);
	void guardGate();
};

#endif
