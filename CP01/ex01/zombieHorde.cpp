#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie	**newZombie;
    int iter = 0;

    if (N <= 0)
        return NULL;
    newZombie = new (std::nothrow) Zombie*[N];
    if(!newZombie)
        return NULL;
    while(iter < N)
    {
        newZombie[iter] = new (std::nothrow) Zombie(name);
        if(!newZombie[iter])
        {
            while(--iter >= 0)
                delete newZombie[iter];
            delete newZombie;
            return NULL;
        }
        iter++;
    }
    return (*newZombie);
}

