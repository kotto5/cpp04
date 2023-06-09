#include "Animal.hpp"

Animal::Animal()
{
    #ifdef DEBUG
        std::cout << "Animal constructor called" << std::endl;
    #endif
}

Animal::~Animal()
{
    #ifdef DEBUG
        std::cout << "Animal destructor called" << std::endl;
    #endif
}

Animal::Animal(const Animal &copy)
{
    #ifdef DEBUG
        std::cout << "Animal copy constructor called" << std::endl;
    #endif
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    #ifdef DEBUG
        std::cout << "Animal operator= called" << std::endl;
    #endif
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

void    Animal::makeSound() const {
    std::cout << "Nothing to say" << std::endl;
}