#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog(/* args */);
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    void    makeSound() const;
};

Dog::Dog(/* args */)
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
    if (this == &copy)
        return (*this);
    this->type = copy.type;
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}

#endif