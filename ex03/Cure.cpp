#include "Cure.hpp"

Cure::Cure(): AMateria(){
    std::cout << "Cure constructor called" << std::endl;
    this->type_ = "cure";
}

Cure::Cure(const Cure &copy): AMateria(){
    std::cout << "Cure copy constructor called" << std::endl;
    *this = copy;
}

Cure &Cure::operator=(const Cure &copy){
    std::cout << "Cure operator= called" << std::endl;
    if (this != &copy)
    {
        this->type_ = copy.type_;
    }
    return (*this);
}

Cure::~Cure(){
    std::cout << "Cure destructor called" << std::endl;
}

AMateria    *Cure::clone() const {
    Cure    *clone = new Cure();
    return (clone);
}

void    Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
