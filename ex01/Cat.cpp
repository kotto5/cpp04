#include "Cat.hpp"

Cat::Cat(){
    #ifdef DEBUG
        std::cout << "cat Default constructor" << std::endl;
    #endif
    this->type = "Cat";
    this->Brain_ = NULL;
}

Cat::Cat(const Cat &other): Animal(){
    #ifdef DEBUG
        std::cout << "Cat copy constructor called" << std::endl;
    #endif
    this->Brain_ = NULL;
    *this = other;
}

Cat::~Cat(){
    std::cout << "cat destructor" << std::endl;
    delete this->Brain_;
    this->Brain_ = NULL;
}

Cat &Cat::operator=(const Cat &other){
    if (this == &other)
        return (*this);
    if (other.Brain_)
    {
        delete Brain_;
        Brain_ = NULL;
        this->Brain_ = new Brain(*other.Brain_);
    }
    this->type = other.type;
    return (*this);
}

void    Cat::makeSound() const {
    std::cout << "Meow ...❤️" << std::endl;
}

void    Cat::setBrain(void){
    if (this->Brain_)
    {
        delete this->Brain_;
        this->Brain_ = NULL;
    }
    this->Brain_ = new Brain();
}

void    Cat::printBrain(void){
    std::cout << "Brain address" << Brain_ << std::endl;
    if (this->Brain_)
        this->Brain_->printIdeas();
    else
    {
        std::cout << "I have no Brain haha!" << std::endl;
    }
}