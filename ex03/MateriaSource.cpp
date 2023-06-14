#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::cout << "MateriaSource constructor called" << std::endl;
    size_t i = 0;
    while (i < MAX_MATERIA)
    {
        materia_[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy){
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy){
    if (this != &copy)
    {
        size_t i = 0;
        while (i < MAX_MATERIA)
        {
            materia_[i] = copy.materia_[i]->clone();
            // materia_[i] = new AMateria(*copy.materia_[i]);
            // materia_[i] = copy.materia_[i];
            i++;
        }
    }
    return (*this);
}

MateriaSource::~MateriaSource(){
    std::cout << "MateriaSource destructor called" << std::endl;
    size_t i = 0;
    while (i < MAX_MATERIA)
    {
        if (materia_[i] != NULL)
            delete materia_[i];
        i++;
    }
}

void MateriaSource::learnMateria(AMateria* m){
    size_t i = 0;
    while (i < MAX_MATERIA)
    {
        if (materia_[i] == NULL)
        {
            materia_[i] = m;
            return ;
        }
        i++;
    }
    std::cout << "MateriaSource is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    size_t i = 0;
    while (i < MAX_MATERIA)
    {
        if (materia_[i] != NULL && materia_[i]->getType() == type)
            return (materia_[i]->clone());
        i++;
    }
    std::cout << "MateriaSource doesn't have this materia" << std::endl;
    return (NULL);
}
