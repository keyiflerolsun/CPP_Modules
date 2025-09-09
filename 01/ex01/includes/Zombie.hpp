/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 12:53:08 by osancak           #+#    #+#             */
/*   Updated: 2025/09/09 16:17:36 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define RED          "\033[0;31m"
# define GREEN        "\033[0;32m"
# define YELLOW       "\033[0;33m"
# define CYAN         "\033[0;36m"
# define MAGENTA      "\033[0;35m"
# define BLUE         "\033[0;34m"
# define BOLD_RED     "\033[1;31m"
# define BOLD_MAGENTA "\033[1;35m"
# define BOLD_CYAN    "\033[1;36m"
# define RESET        "\033[0m"

class Zombie
{
  private:
	std::string name;

  public:
	~Zombie();

	void set_name(std::string name);
	void announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
