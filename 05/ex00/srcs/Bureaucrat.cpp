/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:58:02 by osancak           #+#    #+#             */
/*   Updated: 2026/06/07 11:57:32 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
    std::cout << GREEN << "Bureaucrat Default constructor called" << RESET << std::endl;

    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
    std::cout << BLUE << "Bureaucrat Copy constructor called" << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << MAGENTA << "Bureaucrat Copy assignment operator called" << RESET << std::endl;

    if (this != &src)
        this->grade = src.grade;

    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat Destructor called" << RESET << std::endl;
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade(void)
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
    o << YELLOW << b.getName() << CYAN << ", bureaucrat grade " << MAGENTA << b.getGrade() << CYAN << "." << RESET;
    return (o);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high (Below 1)!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low (Above 150)!");
}
