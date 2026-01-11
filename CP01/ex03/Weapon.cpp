#include "Weapon.hpp"

const std::string Weapon::getType(void)
{
    return ((const std::string) *type);
}
void Weapon::setType(std::string value)
{
    // delete type;
    type = new std::string(value);
    // std::cout << *type << std::endl;
}

Weapon::Weapon(std::string new_type)
{
    type = new std::string(new_type);
}
Weapon::~Weapon(void)
{
    // delete type;
    return ;
}