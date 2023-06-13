#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include "Brain.hpp"

class Cat: public Animal {
private:
    Brain   *Brain_;
public:
    Cat();
    Cat(const Cat &other);
    ~Cat();
    Cat &operator=(const Cat &other);
    void    makeSound() const;
    void    setBrain(void);
    void    printBrain(void);
};

#endif
