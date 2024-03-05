#include<iostream>
#include "critere.h"

Critere::Critere(string poid, string descrip)
{
    this->poids= poid;
    this->description= descrip;
}


Critere::Critere(const Critere& c)
{
    poids=c.poids;
    description=c.description;
}
void Critere::afficher()
{
    cout<<"Le poids est: "<<poids<<"\n la description est: "<<description<<endl;
}
