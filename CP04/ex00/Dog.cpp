#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog Constructor has been called!" << std::endl;
    type = "Dog";
}

Dog::~Dog() {
    std::cout << "Dog Destructor has been called!" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "*Dog sounds*" << std::endl;
}