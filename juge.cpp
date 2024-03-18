#include <iostream>
using namespace std;
#include "juge.h"
#include "danseur.cpp"
#include"score.cpp"
#include <string>
#include <map>

// constructeur par deffaut pour juge
juge::juge()
{
    personnes();
    specialite = "";
}
// constructeur pour juge
juge::juge(int cin_p, string nom, string prenom, string nationalite, string date_naissance, string specialite)
{
    personnes(cin_p, nom, prenom, nationalite, date_naissance);
    this->specialite = specialite;
}
// methode pour afficher juge
void juge::afficher_juge()
{
    personnes::get_personne();
    cout << "la specialite est :" << specialite << endl;
}
void juge::attribuer_score(danseur& D , float score){
    map<danseur,float> list;
    list[D]=score;
}
float juge::obtenir_score(danseur& D){
   map<danseur,float> list; 
   return list[D];

}

