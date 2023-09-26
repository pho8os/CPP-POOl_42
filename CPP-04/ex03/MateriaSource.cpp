#include "MateriaSource.hpp"
#include "AMateria.hpp"


MateriaSource::MateriaSource()
{
    for(int i = 0; i < 4; i++)
        this->ability[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &obj)
{
    for(int i = 0; i < 4; i++)
    {
        this->ability[i] = NULL;
        if(obj.ability[i])
            this->ability[i] = obj.ability[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    for(int i = 0; i < 4; i++)
    {
        this->ability[i] = NULL;
        if(obj.ability[i])
            this->ability[i] = obj.ability[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
        delete *(ability + i);
}

void MateriaSource::learnMateria(AMateria *M)
{
    int i;
    for(i = 0; i < 4; i++)
        if(!this->ability[i])
            this->ability[i] = M->clone();
    delete M;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for(int i = 0; i < 4; i++)
        if(this->ability[i] && this->ability[i]->getType() == type)
            return this->ability[i];
    return NULL;
}