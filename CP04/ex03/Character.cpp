#include "Character.hpp"

Character::Character(std::string new_name) : name(new_name), amount_equipped(0), amount_total(0){
    std::cout << "Character Constructor has been called !" << std::endl;
}

Character::~Character(){
    size_t iter = 0;
    std::cout << "Character Destructor has been called !" << std::endl;
    while(iter < amount_total)
    {
        if(iter < amount_equipped)
            delete inventory[iter];
        delete floor[iter];
        iter++;
    }
}

std::string const & Character::getName() const{
    return name;
}

void Character::equip(AMateria* m){
    tool_amount
}

void Character::unequip(int idx){

}

void Character::use(int idx, ICharacter& target){
    
}