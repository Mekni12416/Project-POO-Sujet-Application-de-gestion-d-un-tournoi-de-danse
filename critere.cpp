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

void Critere::saisirCritere()
{
    cout<<"Donner le poids: ";
    cin>>poids;
    cout<<"Donner la description: ";
    cin>>description;
}

ostream& operator<<(ostream& out, Critere& c)
{
    out<<"\nLe poids est: "<<c.poids;
    out<<"\nla description est:"<<c.description;
    return out;
}

istream& operator>>(istream& in , Critere& c)
{
    cout<<"Donner le poids: ";
    in>>c.poids;
    cout<<"Donner la description: ";
    in>>c.description;
    return in;
}