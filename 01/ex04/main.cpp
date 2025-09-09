/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osancak <osancak@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:09:23 by osancak           #+#    #+#             */
/*   Updated: 2025/09/09 12:38:31 by osancak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


std::string ft_replace(std::string &content, std::string &old_word, std::string &new_word)
{
	std::string res;

	if (old_word.empty())
		return content;

	size_t old_len = old_word.length();
	size_t pos	   = 0;

	while (pos < content.length())
	{
		size_t found = content.find(old_word, pos);
		if (found == std::string::npos)
		{
			res += content.substr(pos);
			break;
		}
		res += content.substr(pos, found - pos) + new_word;
		pos = found + old_len;
	}

	return (res);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./loser 'filename' 'old_word' 'new_word'" << std::endl;
		return (1);
	}
	std::string	ifname 	 = av[1];
	std::string	old_word = av[2];
	std::string	new_word = av[3];
	std::string ofname 	 = ifname + ".replace";

	std::ifstream	infile(ifname.c_str());
	std::string		line;
	std::string		content;
	while (std::getline(infile, line))
		content += line + '\n';
	infile.close();

	std::string replaced = ft_replace(content, old_word, new_word);

	std::ofstream outfile(ofname.c_str());
	outfile << replaced;
	outfile.close();

	return (0);
}
