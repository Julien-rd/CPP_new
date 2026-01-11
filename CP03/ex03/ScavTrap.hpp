#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : virtual public ClapTrap
{
  public:
	ScavTrap(std::string new_name);
	~ScavTrap();
  void guardGate();
  void attack(const std::string &target);

};

#endif