#include "Ice.hpp"

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
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
