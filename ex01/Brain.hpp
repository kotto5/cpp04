#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain{
    private:
        std::string *ideas;
    public:
        Brain();
        Brain(const Brain &other);
        Brain   &operator=(const Brain &other);
        ~Brain();
};

Brain::Brain()
{
    #ifdef DEBUG
        std::cout << "Brain constructor called" << std::endl;
    #endif
}

Brain::~Brain()
{
    #ifdef DEBUG
        std::cout << "Brain destructor called" << std::endl;
    #endif
}

Brain::Brain(const Brain &copy)
{
    #ifdef DEBUG
        std::cout << "Brain copy constructor called" << std::endl;
    #endif
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    #ifdef DEBUG
        std::cout << "Brain operator= called" << std::endl;
    #endif
    if (this != &copy){
        delete [] this->ideas;
        this->ideas = new std::string[100];
        for (int i = 0; i < 100; i++){
            this->ideas[i] = copy.ideas[i];
        }
    }    
    return (*this);
}

#endif