#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal Constructor has been called!" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal Destructor has been called!" << std::endl;
}

void Animal::makeSound() const{
    std::cout << "*Animal sound*" << std::endl;
}

std::string Animal::getType() const{
    return type;
}