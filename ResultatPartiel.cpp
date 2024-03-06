#include "ResultatPartiel.h"
#include<iostream>
ResultatPartiel::ResultatPartiel(int num,float note, string com):Resultat(num, note)
{
    this->commentairePartiel = com;
    int choix;
    score *s;
    do{

        cout<<"Tapez 1 pour continuer ou autre pour arreter";
        cin>>choix; 
    }while (choix==1);
  
}

ResultatPartiel::~ResultatPartiel()
{
    for(int i=0;i<scorePartiel.size();i++)
    {
        delete scorePartiel[i];
    }
    scorePartiel.clear();
}

ResultatPartiel::ResultatPartiel(const ResultatPartiel& r):Resultat(r)
{
    this->commentairePartiel= r.commentairePartiel;
    score *s;
    for(int i=0;i<r.scorePartiel.size();i++)
    {
        s=new score(*r.scorePartiel[i]);
        this->scorePartiel.push_back(s);
    }
}