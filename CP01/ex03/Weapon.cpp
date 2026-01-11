#include "Weapon.hpp"

const std::string &Weapon::getType(void)
{
    std::string &stringREF = type;
    return (stringREF);
}
void Weapon::setType(std::string value)
{
    type = value;
}

Weapon::Weapon(std::string new_type)
{
    type = new_type;
}
Weapon::~Weapon(void)
{
    return ;
}