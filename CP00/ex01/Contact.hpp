/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:26:20 by jromann           #+#    #+#             */
/*   Updated: 2026/01/11 13:16:16 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

#define FIRST_N 0
#define LAST_N 1
#define NICKNAME 2
#define PHONE_N 3
#define DARKEST_S 4

class Contact {
public:
    Contact();
    ~Contact();
    Contact(std::string first_name_v, std::string last_name_v,
	std::string nick_name_v, std::string phone_number_v,
	std::string darkest_secret_v);
    std::string get_info(int flag);
    void set_info(std::string value, int flag);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif