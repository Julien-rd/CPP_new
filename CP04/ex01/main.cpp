#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal *j[100];
int i = -1;
while(++i < 50)
    j[i] = new Dog();
i--;
while(++i < 100)
    j[i] = new Cat();
i = -1;
while(++i < 100)
    delete j[i];
return 0;
}