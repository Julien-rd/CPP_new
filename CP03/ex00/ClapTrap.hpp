#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
  public:
	ClapTrap(std::string new_name);
	~ClapTrap();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

  private:
	std::string name;
	unsigned int hit_pts;
	unsigned int energy_pts;
	unsigned int attack_dmg;
};

#endif