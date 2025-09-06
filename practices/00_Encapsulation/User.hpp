/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   User.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 15:32:33 by osancak           #+#    #+#             */
/*   Updated: 2025/09/06 15:37:18 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_HPP
# define USER_HPP

# include <iostream>

class User
{
  private:
	int age;

  public:
	User();
	void setAge(int newAge);
	int getAge() const;
	void printAge() const;
};

#endif
