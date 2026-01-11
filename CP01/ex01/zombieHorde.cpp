#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie	*newZombie;
    int iter = 0;

    if (N <= 0)
        return NULL;
    newZombie = new (std::nothrow) Zombie[N];
    if(!newZombie)
        return NULL;
    while(iter < N)
    {
        newZombie[iter] = Zombie(name);
        iter++;
    }
    return (newZombie);
}

