#include <iostream>
using namespace std;
#include "danseur_amateur.h"
#include <string>
// constructeur par deffaut pour danseur amateur
danseur_amateur::danseur_amateur()
{
    danseur();
    niveau_entrenement = "";
}
// constructeur pour danseur amateur
danseur_amateur::danseur_amateur(int cin_p, string nom, string prenom, string nationamite, string date_naissance, string style_danse, string niveau_entrenement)
{
    danseur(cin_p, nom, prenom, nationalite, date_naissance, style_danse);
    this->niveau_entrenement = niveau_entrenement;
}
// methode pour enregistrer danseur amateur
void danseur_amateur::enregistrer_danseur_amateur()
{
    danseur::enregistrer_danseur();
    cout << "donner le niveau_entrenement" << endl;
    cin >> niveau_entrenement;
}
//methode pour affichage d un danseur amateur
void danseur_amateur::afficher_danseur_amateur(){
    get_danseur();
    cout << "le niveau d entrainement est :" << niveau_entrenement << endl;
}
