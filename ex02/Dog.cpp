#include "Dog.hpp"

Dog::Dog()
{
    #ifdef DEBUG
        std::cout << "Dog constructor called" << std::endl;
    #endif
    this->type = "Dog";
    this->Brain_ = NULL;
}

Dog::Dog(const Dog &ohter): Animal()
{
    #ifdef DEBUG
        std::cout << "Dog copy constructor called" << std::endl;
    #endif
    this->type = "Dog";
    this->Brain_ = NULL;
    *this = ohter;
}

Dog::~Dog()
{
    #ifdef DEBUG
        std::cout << "Dog destructor called" << std::endl;
    #endif
    if (this->Brain_)
    {
        delete this->Brain_;
        this->Brain_ = NULL;
    }
}

Dog &Dog::operator=(const Dog &other){
    if (this == &other)
        return (*this);
    if (other.Brain_)
    {
        if (this->Brain_)
            delete Brain_;
        this->Brain_ = new Brain(*other.Brain_);
    }
    return (*this);
}

void    Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}

void    Dog::setBrain(void){
    if (this->Brain_)
    {
        delete this->Brain_;
        this->Brain_ = NULL;
    }
    this->Brain_ = new Brain();
}

void    Dog::printBrain(void){
    std::cout << "Brain address" << Brain_ << std::endl;
    if (this->Brain_)
        this->Brain_->printIdeas();
    else
    {
        std::cout << "I have no Brain haha!" << std::endl;
    }
}
