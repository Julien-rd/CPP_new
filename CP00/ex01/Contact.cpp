/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 12:46:33 by jromann           #+#    #+#             */
/*   Updated: 2026/01/11 15:26:52 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

Contact::Contact(std::string first_name_v, std::string last_name_v,
	std::string nick_name_v, std::string phone_number_v,
	std::string darkest_secret_v)
{
    first_name = first_name_v;
    last_name = last_name_v;
    nickname = nick_name_v;
    phone_number = phone_number_v;
    darkest_secret = darkest_secret_v;
}

std::string Contact::get_info(int flag){
    if(flag == FIRST_N)
        return first_name;
    if(flag == LAST_N)
        return last_name;
    if(flag == NICKNAME)
        return nickname;
    if(flag == PHONE_N)
        return phone_number;
    return darkest_secret;
}

void Contact::set_info(std::string value, int flag){
    if(flag == FIRST_N)
        first_name = value;
    if(flag == LAST_N)
        last_name = value;
    if(flag == NICKNAME)
        nickname = value;
    if(flag == PHONE_N)
        phone_number = value;
    if(flag == DARKEST_S)
        darkest_secret = value;
}
