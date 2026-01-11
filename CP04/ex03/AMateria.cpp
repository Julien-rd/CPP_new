#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria Constructor has been called !" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria Destructor has been called !" << std::endl;
}


// std::string const & AMateria::getType() const{
//     return type;
// }

// void AMateria::use(ICharacter& target)
// {
//     std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
// }


