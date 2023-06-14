#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice: public AMateria{
    public:
        Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &copy);
        ~Ice();

        AMateria* clone() const;
        void use(ICharacter &target);
};

Ice::Ice(): AMateria(){
    std::cout << "Ice constructor called" << std::endl;
    this->type_ = "ice";
}

Ice::Ice(const Ice &copy): AMateria(){
    std::cout << "Ice copy constructor called" << std::endl;
    *this = copy;
}

Ice &Ice::operator=(const Ice &copy){
    std::cout << "Ice operator= called" << std::endl;
    if (this != &copy)
    {
        this->type_ = copy.type_;
    }
    return (*this);
}

Ice::~Ice(){
    std::cout << "Ice destructor called" << std::endl;
}

AMateria    *Ice::clone() const {
    Ice    *clone = new Ice();
    return (clone);
}

void    Ice::use(ICharacter &target){
    std::cout << " Ice: \"* heals " << target.getName() << "\'s wounds *\"";
}

#endif
