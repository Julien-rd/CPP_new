/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:25:24 by jromann           #+#    #+#             */
/*   Updated: 2026/01/11 15:27:18 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();
    void search();
    int add();

private:
    Contact Contacts_book[8];
    size_t contact_amount;
    size_t oldest_contact;  

};

#endif
