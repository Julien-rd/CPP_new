#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"
#include <iostream>

class Brain {
    public:

    Brain();
    ~Brain();

    private:

    std::string ideas[100];

} ;

#endif