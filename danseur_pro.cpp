#include <iostream>
using namespace std;
#include "danseur_pro.h"
#include <string>
// constructeur par deffaut pour danseur pro
danseur_pro::danseur_pro()
{
    danseur();
    annee_experience = 0;
    palmares = "";
}
// constructeur pour danseur pro
danseur_pro::danseur_pro(int cin_p, string nom, string prenom, string nationamite, string date_naissance, string style_danse, int annee_experience, string palmares)
{
    this->annee_experience = annee_experience;
    this->palmares = palmares;
}
void danseur_pro::enregistrer_danseur_pro()
{
    danseur::enregistrer_danseur();
    cout << "donner les annee d experience" << endl;
    cin >> annee_experience;
    cout << "donner le palmares" << endl;
    cin >> palmares;
}
// methode afficher danseur_pro
void danseur_pro::afficher_danseur_pro()
{
    danseur::get_danseur();
    cout << "les annees d experience sont :" << annee_experience << endl;
    cout << "le palmares est :" << palmares << endl;
}