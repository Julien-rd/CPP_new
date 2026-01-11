#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
  public:
	FragTrap(std::string new_name);
	~FragTrap();
    void highFivesGuys(void);

};

#endif