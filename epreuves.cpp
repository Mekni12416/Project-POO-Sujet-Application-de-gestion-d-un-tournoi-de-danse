#include "epreuves.h"
#include <iostream>
 
Epreuves::Epreuves(int num, string heure)
{
    this->num_epreuves = num;
    this->heure_epreuves =heure;
}

Epreuves::Epreuves(const Epreuves &e)
{
    this->num_epreuves=e.num_epreuves;
    this->heure_epreuves=e.heure_epreuves;
}
 
void Epreuves::afficher_epreuves()
{
    cout<<"numero epreuve:"<<this->num_epreuves<<"\n heure epreuves: "<<this->heure_epreuves<<endl;
}

 ostream& operator<<(ostream& out , Epreuves& e)
 {
    out<<"\nnumero epreuve:"<<e.num_epreuves;
    out<<"\n heure epreuves: "<<e.heure_epreuves;

    return out;
 }
 istream& operator>>(istream& in, Epreuves& e)
 {
    cout<<"Donner le numero d epreuves:"
    in>>e.num_epreuves;
    cout<<"Donner l heure d epreuves:"
    in>>e.heure_epreuves;
    return in;
 }
