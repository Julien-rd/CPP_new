#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
    : name(new_name), weapon(NULL)
{
}

HumanB::~HumanB() {
    if(weapon != NULL) 
        delete weapon;
    return ; 
}

void HumanB::attack(void) {
    if (weapon != NULL)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon" << std::endl;
}

void HumanB::setWeapon(Weapon new_weapon)
{
    if(weapon != NULL)
        delete(weapon);
    weapon = new Weapon(new_weapon.getType());
}