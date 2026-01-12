/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:06:32 by jromann           #+#    #+#             */
/*   Updated: 2026/01/12 17:38:08 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	int log_lvl = 0;
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	Harl harl;
	if(argc != 2)
		return 1;
    while(log_lvl < 4) {
        if (argv[1] == levels[log_lvl]) {
            break ;
		}
		log_lvl++;
    }
	switch(log_lvl) {
    case 0:
        harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
        break;
    case 1:
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
        break;
    case 2:
		harl.complain("WARNING");
		harl.complain("ERROR");
        break;
	case 3:
		harl.complain("ERROR");
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}