/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 10:56:18 by osancak           #+#    #+#             */
/*   Updated: 2026/06/07 11:57:34 by osancak          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << CYAN << "=== TEST 1: Normal Bureaucrat ===" << RESET << std::endl;
    try
    {
        Bureaucrat ismet("ismet", 10);

        std::cout << "[~] " << ismet << std::endl;

        ismet.incrementGrade();
        std::cout << "[-] " << ismet << std::endl;

        ismet.decrementGrade();
        std::cout << "[+] " << ismet << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "[!] " << e.what() << RESET << std::endl;
    }

    std::cout << std::endl;




    std::cout << CYAN << "=== TEST 2: Grade Too High ===" << RESET << std::endl;
    try
    {
        Bureaucrat mahmut("mahmut", 0);
        std::cout << "[~] " << mahmut << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "[!] " << e.what() << RESET << std::endl;
    }

    std::cout << std::endl;




    std::cout << CYAN << "=== TEST 3: Overload ===" << RESET << std::endl;
    try
    {
        Bureaucrat hasan("hasan", 149);
        std::cout << "[~] " << hasan << std::endl;

        hasan.decrementGrade();
        std::cout << "[+] " << hasan << std::endl;

        std::cout << "[+] Test" << std::endl;
        hasan.decrementGrade();

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "[!] " << e.what() << RESET << std::endl;
    }

    return (0);
}
