#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string new_name): ClapTrap(new_name), FragTrap(new_name), ScavTrap(new_name){
    std::cout << "DiamondTrap: Constructor called!" << std::endl;
    hit_pts = FragTrap::hit_pts;
    energy_pts = ScavTrap::energy_pts;
    attack_dmg = FragTrap::attack_dmg;
    ClapTrap::name = new_name + "_clap_name";
    name = new_name;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap: Destructor called!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap: " << name << std::endl;
    std::cout << "ClapTrap: " << ClapTrap::name << std::endl; 
}

void DiamondTrap::attack(const std::string &target){
    ScavTrap::attack(target);
}