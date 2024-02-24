#include <iostream>
using namespace std;
#include "personnes.h"
#include <string>

// constructeur personnes pour initialiser les attributs
personnes::personnes()
{
    cin_p = 0;
    nom = "";
    prenom = "";
    nationalite = "";
    date_naissance = "";
}
// constructeur personnes pour saisir les attributs
personnes::personnes(int cin, string nom, string prenom, string nationalite, string date_naissance)
{
    this->cin_p = cin_p;
    this->nom = nom;
    this->prenom = prenom;
    this->nationalite = nationalite;
    this->date_naissance = date_naissance;
}
// methode seter personne
void personnes::set_personne()
{
    cout << "donner le cin du personne" << endl;
    cin >> cin_p;
    cout << "donner le nom du personne" << endl;
    cin >> nom;
    cout << "donner le prenom du personne" << endl;
    cin >> prenom;
    cout << "donner le nationalite du personne" << endl;
    cin >> nationalite;
    cout << "donner date naissance du personne" << endl;
    cin >> date_naissance;
}
//methode geter personne
void personnes::get_personne(){
    cout<<"******Affichage du personne******"<<endl;
    cout<<"le cin du personne est :  "<<cin_p<<endl;;
    cout<<"le nom du personne est :  "<<nom<<endl;
    cout<<"le prenom du personne est :  "<<prenom<<endl;
    cout<<"la nationalite du personne est :  "<<nationalite<<endl;
    cout<<"la date de naissance du personne est :  "<<date_naissance<<endl;
}