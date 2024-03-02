#include <iostream>
using namespace std;
#include "juge.h"
#include <string>
#include <map>
#include "danseur.cpp"
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


