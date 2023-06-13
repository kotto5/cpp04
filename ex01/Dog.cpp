#include "Dog.hpp"

Dog::Dog()
{
    #ifdef DEBUG
        std::cout << "Dog constructor called" << std::endl;
    #endif

    this->type = "Dog";
    this->Brain_ = NULL;
}

Dog::~Dog()
{
    #ifdef DEBUG
        std::cout << "Dog destructor called" << std::endl;
    #endif
}

Dog::Dog(const Dog &ohter): Animal()
{
    #ifdef DEBUG
        std::cout << "Dog copy constructor called" << std::endl;
    #endif
    *this = ohter;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other)
    {
        this->type = other.type;
        this->Brain_ = other.Brain_;
    }
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}

void    Dog::setBrain(std::string ideas[100]){
    if (this->Brain_)
        delete this->Brain_;
    this->Brain_ = new Brain(ideas);
}

void    Dog::setBrain(void){
    if (this->Brain_)
        delete this->Brain_;
    this->Brain_ = new Brain();
}

void    Dog::printBrain(void){
    this->Brain_->printIdeas();
}
