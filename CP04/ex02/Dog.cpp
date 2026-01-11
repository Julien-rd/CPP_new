#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog Constructor has been called!" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog Destructor has been called!" << std::endl;
    delete brain;
}

void Dog::makeSound() const{
    std::cout << "*Dog sounds*" << std::endl;
}