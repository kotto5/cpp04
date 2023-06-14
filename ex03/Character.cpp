#include "Character.hpp"

Character::Character(){
    std::cout << "Character constructor called" << std::endl;
    this->name_ = "default";
    for (int i = 0; i < MAX_EQUIP_SLOT; i++)
    {
        this->equipSlot[i] = NULL;
    }
}

Character::Character(const std::string &name): name_(name){
    std::cout << "Character copy constructor called" << std::endl;
    for (int i = 0; i < MAX_EQUIP_SLOT; i++)
    {
        this->equipSlot[i] = NULL;
    }
}

Character::Character(const Character &copy){
    std::cout << "Character copy constructor called" << std::endl;
    *this = copy;
}

Character &Character::operator=(const Character &copy){
    std::cout << "Character operator= called" << std::endl;
    if (this != &copy)
    {
        this->name_ = copy.name_;
        for (int i = 0; i < MAX_EQUIP_SLOT; i++)
        {
            if (this->equipSlot[i])
            {
                delete this->equipSlot[i];
                this->equipSlot[i] = NULL;
            }
            this->equipSlot[i] = copy.equipSlot[i]->clone();
        }
    }
    return (*this);
}

Character::~Character(){
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < MAX_EQUIP_SLOT; i++)
    {
        if (this->equipSlot[i])
        {
            delete this->equipSlot[i];
            this->equipSlot[i] = NULL;
        }
    }
}

std::string const & Character::getName() const{
    return (this->name_);
}

void    Character::equip(AMateria *m){
    if (m == NULL)
        return ;
    for (int i = 0; i < MAX_EQUIP_SLOT; i++)
    {
        if (this->equipSlot[i] == NULL)
        {
            this->equipSlot[i] = m;
            return ;
        }
    }
}

void    Character::unequip(int idx){
    if (idx < 0 || idx >= MAX_EQUIP_SLOT)
        return ;
    this->equipSlot[idx] = NULL;
}

void    Character::use(int idx, ICharacter &target){
    if (idx < 0 || idx >= MAX_EQUIP_SLOT)
        return ;
    if (this->equipSlot[idx])
        this->equipSlot[idx]->use(target);
    else
        std::cout << "No materia in " << idx << " slot" << std::endl;
}
