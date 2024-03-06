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
personnes::personnes(int cin_p,string  nom , string prenom, string nationalite, string date_naissance)
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
    cout << "donner le cin " << endl;
    cin >> cin_p;
    cout << "donner le nom " << endl;
    cin >> nom;
    cout << "donner le prenom " << endl;
    cin >> prenom;
    cout << "donner le nationalite " << endl;
    cin >> nationalite;
    cout << "donner date naissance " << endl;
    cin >> date_naissance;
}
// methode geter personne
void personnes::get_personne()
{
    cout << "******Affichage ******" << endl;
    cout << "le cin  est :  " << cin_p << endl;
    cout << "le nom  est :  " << nom << endl;
    cout << "le prenom  est :  " << prenom << endl;
    cout << "la nationalite est :  " << nationalite << endl;
    cout << "la date de naissance  est :  " << date_naissance << endl;
}
//methode pour modifier personne
void personnes::modifier_personne()
{
    int choix;
    cout << "si voulez vous modidfier le champ de cin de personne taper 1 " << endl;
    cout << "si voulez vous modidfier le champ de nom de peesonne taper 2 " << endl;
    cout << "si voulez modidfier le champ de prenom de personnetaper 3 " << endl;
    cout << "si voulez modidfier le champ de nationalite de personne taper 4 " << endl;
    cout << "si voulez modidfier le champ de date naissance de personne taper 5 " << endl;
    cout << "donner le choix" << endl;
    cin >> choix;
    if (choix == 1)
    {
        int modification;
        cout << "donner la modification " << endl;
        cin >> modification;
        cin_p = modification;
    }
    else if (choix == 2)
    {
        string modification;
        cout << "donner la modification " << endl;
        cin >> modification;
        nom = modification;
    }
    else if (choix == 3)
    {
        string modification;
        cout << "donner la modification " << endl;
        cin >> modification;
        prenom = modification;
    }
    else if (choix == 4)
    {
        string modification;
        cout << "donner la modification " << endl;
        cin >> modification;
        nationalite = modification;
    }
    else if (choix == 5)
    {
        string modification;
        cout << "donner la modification " << endl;
        cin >> modification;
        date_naissance = modification;
    }
}