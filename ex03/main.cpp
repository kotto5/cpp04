#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include <iostream>

void    test1(){
    AMateria *ice = new Ice();
    AMateria *cure = new Cure();
    delete ice;
    delete cure;
}

void   test2(){
    AMateria *ice = new Ice();
    AMateria *ice2 = ice->clone();
    AMateria *cure = new Cure();
    AMateria *cure2 = cure->clone();
    delete ice;
    delete cure;
    delete ice2;
    delete cure2;
}

void    test3(){
    Cure *cure = new Cure();
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());
    src->learnMateria(cure);
    delete src;
    delete cure;
}

void    testpdf(){
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter *me = new Character("me");

    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter *bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    delete me;
    delete bob;
    delete src;
}

void    test5(){

}

int main(){
    test1();
    test2();
    test3();
    testpdf();

    system("leaks -q exefile");
}