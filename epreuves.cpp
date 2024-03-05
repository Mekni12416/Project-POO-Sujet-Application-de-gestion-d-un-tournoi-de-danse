#include "epreuves.h"
#include <iostream>
 
Epreuve::Epreuve(int num, string heure)
{
    this->num_epreuves = num;
    this->heure_epreuves =heure;
}

Epreuve::Epreuve(const Epreuve &e)
{
    this->num_epreuves=e.num_epreuves;
    this->heure_epreuves=e.heure_epreuves;
}
 
void Epreuve::afficher_epreuves()
{
    cout<<"numero epreuve:"<<this->num_epreuves<<"\n heure epreuves: "<<this->heure_epreuves<<endl;
}

