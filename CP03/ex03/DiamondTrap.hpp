#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{

  public:
	DiamondTrap(std::string new_name);
	~DiamondTrap();
	void whoAmI();
	void attack(const std::string &target);

  private:
	std::string name;
};

#endif