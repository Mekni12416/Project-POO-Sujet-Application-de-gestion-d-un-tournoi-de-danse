
#include "Resultat.h"


Resultat::Resultat(int num, float note)
{
    this->num_res= num;
    this->note= note;
}

Resultat::~Resultat()
{
}

Resultat::Resultat(const Resultat& r)
{
    this->num_res= r.num_res;
    this->note = r.note;
}