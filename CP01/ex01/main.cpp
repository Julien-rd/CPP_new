#include "Zombie.hpp"

int main(void)
{
    Zombie	*Zombie_horde;
    int i = -1;
    int amount = 10;

    Zombie_horde = zombieHorde(amount, "julien");
    if(!Zombie_horde)
        return 1;
    while(++i < amount)
        Zombie_horde[i].announce();
    delete[] Zombie_horde;
    return 0;
}