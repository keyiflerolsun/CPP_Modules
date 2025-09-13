/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:02:11 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 10:44:59 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define RED          "\033[0;31m"
# define GREEN        "\033[0;32m"
# define YELLOW       "\033[0;33m"
# define BLUE         "\033[0;34m"
# define MAGENTA      "\033[0;35m"
# define CYAN         "\033[0;36m"
# define RESET        "\033[0m"

class Fixed
{
  private:
	int					fixed_point;
	static const int	binary_point = 8;

  public:
	// Orthodox Canonical Form
	Fixed();								// Default constructor
	Fixed(const Fixed &copy);				// Copy constructor
	Fixed &operator = (const Fixed &src);	// Copy assignment operator
	~Fixed();								// Destructor

	// Setter / Getter
	void	setRawBits(int const raw);
	int		getRawBits(void) const;			// ! Const Correctness
};

#endif
