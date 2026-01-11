#include "Zombie.hpp"

int main(void)
{
    Zombie	*Zombie_horde;
    Zombie	*tmp;
    int i = -1;
    int amount = 10;

    Zombie_horde = zombieHorde(amount, "julien");
    while(++i < amount)
    {
        Zombie_horde->announce();
        tmp = Zombie_horde;
        Zombie_horde++;
        // delete tmp;
    }
}