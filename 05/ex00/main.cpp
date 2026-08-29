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
    std::cout << CYAN << "=== TEST 1: Normal Bürokrat & OCF Yapısı ===" << RESET << std::endl;
    try
    {
        Bureaucrat ismet("ismet", 10);
        std::cout << "[~] " << ismet << std::endl;

        Bureaucrat def;
        std::cout << "[~] Varsayılan (Default): " << def << std::endl;

        Bureaucrat copy(ismet);
        std::cout << "[~] ismet'in Kopyası: " << copy << std::endl;

        def = ismet;
        std::cout << "[~] Atama sonrası Varsayılan: " << def << std::endl;

        ismet.incrementGrade();
        std::cout << "[-] Derece Artırıldı (Değer Düştü): " << ismet << std::endl;

        ismet.decrementGrade();
        std::cout << "[+] Derece Düşürüldü (Değer Arttı): " << ismet << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "[!] Hata Yakalandı: " << e.what() << RESET << std::endl;
    }

    std::cout << std::endl;




    std::cout << CYAN << "=== TEST 2: Derece Çok Yüksek (Grade Too High) ===" << RESET << std::endl;
    try
    {
        Bureaucrat mahmut("mahmut", 0);
        std::cout << "[~] " << mahmut << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "[!] Hata Yakalandı: " << e.what() << RESET << std::endl;
    }

    std::cout << std::endl;




    std::cout << CYAN << "=== TEST 3: Derece Çok Düşük (Grade Too Low / Sınır Aşımı) ===" << RESET << std::endl;
    try
    {
        Bureaucrat hasan("hasan", 149);
        std::cout << "[~] " << hasan << std::endl;

        hasan.decrementGrade();
        std::cout << "[+] Derece Düşürüldü: " << hasan << std::endl;

        std::cout << "[~] Sınırı aşmak için tekrar düşürülüyor..." << std::endl;
        hasan.decrementGrade();

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << "[!] Hata Yakalandı: " << e.what() << RESET << std::endl;
    }

    return (0);
}
