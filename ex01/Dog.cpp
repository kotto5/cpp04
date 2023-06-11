#include "Dog.hpp"

Dog::Dog()
{
    #ifdef DEBUG
        std::cout << "Dog constructor called" << std::endl;
    #endif

    this->type = "Dog";
}

Dog::~Dog()
{
    #ifdef DEBUG
        std::cout << "Dog destructor called" << std::endl;
    #endif
}

Dog::Dog(const Dog &copy)
{
    #ifdef DEBUG
        std::cout << "Dog copy constructor called" << std::endl;
    #endif
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}
