#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Constructor has been called!" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat Destructor has been called!" << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << "*Cat sounds*" << std::endl;
}