/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jromann <jromann@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 17:06:32 by jromann           #+#    #+#             */
/*   Updated: 2026/01/12 17:09:42 by jromann          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	harl.complain("HEY");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("ERROR");
	harl.complain("WARNING");
	return (0);
}