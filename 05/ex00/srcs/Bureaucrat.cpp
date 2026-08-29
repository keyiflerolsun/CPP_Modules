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

// Default constructor
Bureaucrat::Bureaucrat() : name("Default Bureaucrat"), grade(150)
{
    std::cout << GREEN << "Bureaucrat Default constructor called [name=" << this->name << ", grade=" << this->grade << "]" << RESET << std::endl;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
    std::cout << BLUE << "Bureaucrat Copy constructor called [name=" << this->name << ", grade=" << this->grade << "]" << RESET << std::endl;
}

// Copy assignment operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << MAGENTA << "Bureaucrat Copy assignment operator called [assigning name=" << src.name << ", grade=" << src.grade << " to name=" << this->name << ", old_grade=" << this->grade << "]" << RESET << std::endl;

    if (this != &src) // Self-assignment guard
        this->grade = src.grade;

    return (*this); // Allow chained assignments
}

// Destructor
Bureaucrat::~Bureaucrat()
{
    std::cout << GREY << "Bureaucrat Destructor called [name=" << this->name << ", grade=" << this->grade << "]" << RESET << std::endl;
}

// Parameterized constructor
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name), grade(grade)
{
    std::cout << GREEN << "Bureaucrat Parameterized constructor called [name=" << name << ", grade=" << grade << "]" << RESET << std::endl;

    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

// Overload the insertion operator for Bureaucrat
std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
    o << YELLOW << b.getName() << CYAN << ", bureaucrat grade " << MAGENTA << b.getGrade() << CYAN << "." << RESET;
    return (o); // Allow chained output
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high (Below 1)!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low (Above 150)!");
}
