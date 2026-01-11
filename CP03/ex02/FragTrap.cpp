#include "FragTrap.hpp"

FragTrap::FragTrap(std::string new_name) : ClapTrap(new_name)  {

    std::cout << "FragTrap: Constructor called!" << std::endl;
    hit_pts = 100;
    energy_pts = 100;
    attack_dmg = 30;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap: Destructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void){
    std::cout << "positive high-fives request!" << std::endl;
}