#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    
    public:

    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
    
    
    protected:
    
    Animal();
    std::string type;
} ;

#endif