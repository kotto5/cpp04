#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

#define MAX_EQUIP_SLOT 4

class Character: public ICharacter{
private:
    std::string name_;
    AMateria    *equipSlot[MAX_EQUIP_SLOT];
public:
    Character(/* args */);
    Character(const Character &copy);
    Character(const std::string &name);
    Character &operator=(const Character &copy);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif
