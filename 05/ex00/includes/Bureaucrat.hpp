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
# define RESET        "\033[0m"

class Bureaucrat
{
  private:
    const std::string name;
    int               grade;

  public:
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &copy);
    Bureaucrat &operator=(const Bureaucrat &src);
    ~Bureaucrat();

    std::string getName(void) const;
    int         getGrade(void) const;
    void        incrementGrade(void);
    void        decrementGrade(void);

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

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);

#endif
