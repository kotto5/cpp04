#include "AMateria.hpp"
// #include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// #include "Character.hpp"
// #include "MateriaSource.hpp"
#include <iostream>

void    test1(){
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    delete ice;
    delete cure;
}

int main(){
    test1();
}