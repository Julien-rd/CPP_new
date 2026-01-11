#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character: public ICharacter {

public:
Character(std::string new_name);
virtual ~Character();
virtual std::string const & getName() const;
virtual void equip(AMateria* m);
virtual void unequip(int idx);
virtual void use(int idx, ICharacter& target);

private:
std::string name;
AMateria *inventory[4];
AMateria *floor[4];
size_t amount_equipped;
size_t amount_total;

};

#endif