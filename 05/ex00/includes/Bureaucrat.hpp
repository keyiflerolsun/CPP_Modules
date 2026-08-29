/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:56:18 by osancak           #+#    #+#             */
/*   Updated: 2026/06/07 11:44:25 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

# define RED          "\033[0;31m"
# define GREEN        "\033[0;32m"
# define YELLOW       "\033[0;33m"
# define BLUE         "\033[0;34m"
# define MAGENTA      "\033[0;35m"
# define CYAN         "\033[0;36m"
# define GREY         "\033[90m"
# define RESET        "\033[0m"

class Bureaucrat
{
  private:
    const std::string name;
    int               grade;

  public:
    Bureaucrat();                                   // Default constructor
    Bureaucrat(const Bureaucrat &copy);             // Copy constructor
    Bureaucrat &operator=(const Bureaucrat &src);   // Copy assignment operator
    ~Bureaucrat();                                  // Destructor

    Bureaucrat(const std::string &name, int grade); // Parameterized constructor

    std::string getName() const;  // getters are const member functions
    int         getGrade() const; // getters are const member functions
    void        incrementGrade();
    void        decrementGrade();

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

// Overload the insertion operator for Bureaucrat
std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);

#endif
