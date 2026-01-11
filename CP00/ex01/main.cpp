/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 13:46:10 by jromann           #+#    #+#             */
/*   Updated: 2026/01/11 15:29:20 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break ;
		}
		if (command == "ADD")
		{
			if (phonebook.add() == 1)
                return 1;
		}
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break ;
	}

	return (0);
}