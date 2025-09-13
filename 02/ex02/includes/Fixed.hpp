/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 10:02:11 by osancak           #+#    #+#             */
/*   Updated: 2025/09/13 12:14:31 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

	// Type Specific Constructors
	Fixed(const int n);                     // Int constructor
	Fixed(const float f);                   // Float constructor

	// Setter / Getter
	void	setRawBits(int const raw);
	int		getRawBits(void) const;			// ! Const Correctness

	// Conversion Methods
	float   toFloat(void) const;
	int     toInt(void) const;

	// Comparison operators
	bool operator > (const Fixed &src) const;
	bool operator < (const Fixed &src) const;
	bool operator >= (const Fixed &src) const;
	bool operator <= (const Fixed &src) const;
	bool operator == (const Fixed &src) const;
	bool operator != (const Fixed &src) const;

	// Arithmetic operators
	Fixed operator + (const Fixed &src) const;
	Fixed operator - (const Fixed &src) const;
	Fixed operator * (const Fixed &src) const;
	Fixed operator / (const Fixed &src) const;

	// Increment/Decrement
	Fixed &operator ++ ();     // pre-increment
	Fixed  operator ++ (int);  // post-increment
	Fixed &operator -- ();     // pre-decrement
	Fixed  operator -- (int);  // post-decrement

	// Min/Max functions
	static Fixed        &min(Fixed &a, Fixed &b);
	static const Fixed  &min(const Fixed &a, const Fixed &b);
	static Fixed        &max(Fixed &a, Fixed &b);
	static const Fixed  &max(const Fixed &a, const Fixed &b);
};

// << Operator overload
std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif
