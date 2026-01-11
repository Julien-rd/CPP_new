#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Ice : public AMateria {

public:
// AMateria(std::string const & type);
// std::string const & getType() const; //Returns the materia type
// virtual AMateria* clone() const;
void use(ICharacter& target);

};

#endif