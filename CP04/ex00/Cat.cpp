#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat Constructor has been called!" << std::endl;
    type = "Cat";
}

Cat::~Cat() {
    std::cout << "Cat Destructor has been called!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "*Cat sounds*" << std::endl;
}