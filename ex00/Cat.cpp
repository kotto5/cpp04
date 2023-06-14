#include "Cat.hpp"

Cat::Cat(): Animal(){
    #ifdef DEBUG
        std::cout << "cat Default constructor" << std::endl;
    #endif
}

Cat::Cat(const Cat &other): Animal(){
    #ifdef DEBUG
        std::cout << "Cat copy constructor called" << std::endl;
    #endif
    *this = other;
}

Cat::~Cat(){
    std::cout << "cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meow ...❤️" << std::endl;
}
