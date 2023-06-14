#include "AMateria.hpp"

AMateria::AMateria(){
    std::cout << "AMateria constructor called" << std::endl;
    this->type_ = "amateria";
}

AMateria::AMateria(std::string const & type){
    std::cout << "AMateria constructor called" << std::endl;
    this->type_ = type;
}

AMateria::~AMateria(){
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy){
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy){
    std::cout << "AMateria operator= called" << std::endl;
    if (this != &copy)
    {
        this->type_ = copy.type_;
    }
    return (*this);
}

std::string const & AMateria::getType() const{
    return (this->type_);
}

void    AMateria::use(ICharacter &target){
    std::cout << "use " << this->type_ << " Materia to " << target.getName() << std::endl;
}
