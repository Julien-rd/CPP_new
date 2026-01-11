#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name) : ClapTrap(new_name)  {

    std::cout << "ScavTrap: Constructor called!" << std::endl;
    hit_pts = 100;
    energy_pts = 50;
    attack_dmg = 20;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap: Destructor called!" << std::endl;
}

void ScavTrap::guardGate(){
    if(hit_pts == 0)
        std::cout << "ScavTrap " << name << " is dead!" << std::endl;
    else
        std::cout << "ScavTrap " << name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if(hit_pts == 0){
        std::cout << "ScavTrap " << name << " is dead! Attacking is not possible!" << std::endl;
    }
    else if ( energy_pts == 0 )
        std::cout << "ScavTrap " << name << " has no energy points left to attack!" << std::endl;
    else{
        std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_dmg << " points of damage!" << std::endl;
        energy_pts--;
    }
}


