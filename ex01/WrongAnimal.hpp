#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    WrongAnimal &operator=(const WrongAnimal &copy);
    void    makeSound() const;
    const std::string   &getType(void) const;
};

#endif