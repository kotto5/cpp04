#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

#include <iostream>

class Cat: public Animal
{
public:
    Cat(/* args */);
    ~Cat();
    Cat &operator=(const Cat &other);
    void    makeSound() const;
};

Cat::Cat(/* args */){
    std::cout << "cat Default constructor" << std::endl;
}

Cat::~Cat(){
    std::cout << "cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    if (this == &other)
        return (*this);
    this->type = "Cat";
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meow ...❤️" << std::endl;
}

#endif
