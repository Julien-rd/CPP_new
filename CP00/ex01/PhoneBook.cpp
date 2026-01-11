/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:27:09 by jromann           #+#    #+#             */
/*   Updated: 2026/01/11 15:27:08 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_amount(0), oldest_contact(0)
{
    
}
PhoneBook::~PhoneBook(){
}

int PhoneBook::add()
{
	std::string input[5];
    while(1)
    {
        std::cout << "Please enter first name" << std::endl;
        if (!std::getline(std::cin, input[0]))
            return 1;
        if  (input[0].size() != 0){
            break;
        }
        std::cout << "Field cannot be empty !" << std::endl;
    }
    while(1)
    {
        std::cout << "Please enter last name" << std::endl;
        if (!std::getline(std::cin, input[1]))
            return 1;
        if  (input[1].size() != 0){
            break ;
        }
        std::cout << "Field cannot be empty !" << std::endl;
    }
    while(1)
    {
        std::cout << "Please enter nickname" << std::endl;
        if (!std::getline(std::cin, input[2]))
            return 1;
        if  (input[2].size() != 0){
            break ;
        }
        std::cout << "Field cannot be empty !" << std::endl;
    }
    while(1)
    {
        std::cout << "Please enter phone number" << std::endl;
        if (!std::getline(std::cin, input[3]))
            return 1;
        if  (input[3].size() != 0){
            break ;
        }
        std::cout << "Field cannot be empty !" << std::endl;
    }
    while(1)
    {
        std::cout << "Please enter darkest secret" << std::endl;
        if(!std::getline(std::cin, input[4]))
            return 1;
        if  (input[4].size() != 0){
            break ;
        }
        std::cout << "Field cannot be empty !" << std::endl;
    }
	Contact new_contact(input[0], input[1], input[2], input[3], input[4]);
	if (contact_amount == 8)
	{
		Contacts_book[oldest_contact] = new_contact;
		if (oldest_contact == 7)
			oldest_contact = 0;
		else
			oldest_contact++;
	}
	else
	{
		Contacts_book[contact_amount] = new_contact;
		contact_amount++;
	}
    std::cout << "Contact successfully saved!" << std::endl;
    return 0;
}


static void	print_info(std::string str)
{
	size_t	iter;

	iter = 0;
	if (str.size() > 10)
	{
		while (iter < 9)
		{
			std::cout << str[iter];
			iter++;
		}
		std::cout << ".";
	}
	else
		std::cout << str;
	iter = 0;
	while (str.size() + iter < 10)
	{
		std::cout << " ";
		iter++;
	}
}

void PhoneBook::search()
{
	size_t	iter;

	iter = 0;
	while (iter < contact_amount)
	{
		std::cout << iter + 1 << " | ";
		print_info(Contacts_book[iter].get_info(FIRST_N));
		std::cout << " | ";
		print_info(Contacts_book[iter].get_info(LAST_N));
		std::cout << " | ";
		print_info(Contacts_book[iter].get_info(NICKNAME));
		std::cout << std::endl;
		iter++;
	}
}
