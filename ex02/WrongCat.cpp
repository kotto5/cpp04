#include "WrongCat.hpp"

WrongCat::WrongCat(){
    #ifdef DEBUG
        std::cout << "Wrongcat Default constructor" << std::endl;
    #endif
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(){
    #ifdef DEBUG
        std::cout << "WrongCat copy constructor called" << std::endl;
    #endif
    *this = other;
}

WrongCat::~WrongCat(){
    std::cout << "Wrongcat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    if (this != &other){
        this->type = other.type;
    }
    return (*this);
}

void    WrongCat::makeSound() const {
    std::cout << "Wrong Meow ...❤️" << std::endl;
}
