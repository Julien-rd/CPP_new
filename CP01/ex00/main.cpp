#include "Zombie.hpp"

int main(void)
{
    Zombie	*Zombie;
    randomChump("julien");
    Zombie = newZombie("shariya");
    Zombie->announce();
    delete Zombie;
}