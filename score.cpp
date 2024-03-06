#include<iostream>
#include "score.h"

score::score(int num, int val)
{
    this->valeur=val;
    this->numScore=num;
}

score::~score()
{
    for(int i=0;i<listCrit.size();i++)
    {
        delete listCrit[i];
    }
    listCrit.clear();
}

score::score(const score&s)
{
    this->numScore=s.numScore;
    this->valeur= s.valeur;
    Critere *c;
    for(int i=0;i<s.listCrit.size();i++)
    {
        c= new Critere(*s.listCrit[i]);
        listCrit.push_back(c);
    }
}

void score::enregistrerScore()
{
    cout<<"Donner le numero score: ";
    cin>>numScore;
    cout<<"Donner la valeur: ";
    cin>>valeur;
    cout<<"Donner les criteres "<<endl;
    Critere *c;
    int choix;
    do{
        c->saisirCritere();
        listCrit.push_back(c);
        cout<<"Voulez vous ajouter d autres critere: Tapez 1 pour continuer ou autres pour arreter: ";
        cin>>choix;
        
    }while(choix==1);
}