#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *Brain_;
public:
    Dog();
    ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);
    void    makeSound() const;
    void    setBrain(std::string ideas[100]);
    void    setBrain(void);
    void    printBrain(void);
};

#endif