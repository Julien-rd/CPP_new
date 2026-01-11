#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
  public:
	HumanA(std::string new_name, Weapon new_weapon);
	~HumanA();
	void attack(void);

  private:
	std::string name;
	Weapon *weapon;
};

#endif