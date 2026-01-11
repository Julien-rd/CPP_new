#include "ClapTrap.hpp"

int main()
{
    ClapTrap mate("Sebastian");

    mate.attack("jerome");
    mate.beRepaired(10);
    mate.takeDamage(10);
    mate.takeDamage(90);
    mate.attack("jerome");
    mate.beRepaired(10);
    mate.takeDamage(90);
}