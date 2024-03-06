#include "Recompenses.h"
Recompenses::Recompenses(int num, string med, string trop)
{
    this->num_recom= num;
    this->medailles=med;
    this->trophee=trop;
}

Recompenses::~Recompenses()
{
}

Recompenses::Recompenses(const Recompenses& r)
{
    num_recom=r.num_recom;
    medailles= r.medailles;
    trophee= r.trophee;
}