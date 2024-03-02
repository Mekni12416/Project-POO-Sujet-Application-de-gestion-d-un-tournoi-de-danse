#include <iostream>
using namespace std;
#include "danseur.h"
#include <string>
// constructeur par deffaut de danseur
danseur::danseur()
{
    personnes();
    style_danse = "";
}
// constructeur pour danseur
danseur::danseur(int cin_p, string nom, string prenom, string nationalite, string date_naissance, string style_danse)
{
    personnes(cin_p, nom, prenom, nationalite, date_naissance); 
    this->style_danse = style_danse;
}
// methode pour enregistrer danseur
void danseur::enregistrer_danseur()
{
    cout << "*******enregistration des danseurs*********" << endl;
    set_personne();
    cout << "donner le style de danse" << endl;
    cin >> style_danse;
}
// methode geter pour danseur
void danseur::get_danseur()
{
    personnes::get_personne();
    cout << "le style de danse est :" << style_danse << endl;
}


