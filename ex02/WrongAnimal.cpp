#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    #ifdef DEBUG
        std::cout << "WrongAnimal constructor called" << std::endl;
    #endif
}

WrongAnimal::~WrongAnimal()
{
    #ifdef DEBUG
        std::cout << "WrongAnimal destructor called" << std::endl;
    #endif
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    #ifdef DEBUG
        std::cout << "WrongAnimal copy constructor called" << std::endl;
    #endif
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    #ifdef DEBUG
        std::cout << "WrongAnimal operator= called" << std::endl;
    #endif
    if (this != &copy){
        this->type = copy.type;
    }
    return (*this);
}

void    WrongAnimal::makeSound() const {
    std::cout << "Wrong animal dazo! gao!" << std::endl;
}

const std::string    &WrongAnimal::getType() const {return (this->type); }
