#include <iostream>
using namespace std;
#include "organisateur.h"
#include <string>
// constructeur par deffaut pour oragnisateur
organisateur::organisateur()
{
    personnes();
    role = "";
    nombre_tournoi_organisee = 0;
}
// constructeur pour organisateur
organisateur::organisateur(int cin_p, string nom, string prenom, string nationalite, string date_naissance, string role, int nombre_tournoi_organisee)
{
    personnes(cin_p, nom, prenom, nationalite, date_naissance);
    this->role = role;
    this->nombre_tournoi_organisee = nombre_tournoi_organisee;
}
// methode seter pour organisateur
void organisateur::set_organisateur()
{
    set_personne();
    cout << "donner le role de l organisateur" << endl;
    cin >> role;
    cout << "donner le nombre des tournois organisee par l organisateur" << endl;
    cin >> nombre_tournoi_organisee;
}
// methode geter pour organisateur
void organisateur::get_organisateur()
{
    get_personne();
    cout << " le role de l organisateur est : " << role<<endl;
    cout << "le nombre des tournois organisee par l organisateur : " << nombre_tournoi_organisee<<endl;
}
// methode pour creer un tournoi
void organisateur::creer_tournoi()
{

    cout << "******creation d un tournoi de danse******" << endl;
    cout << "///////pour creer le tournoi completer les champs suivant->->->->->->" << endl;
    cout << "donner le nom de tournoi" << endl;
    cin>>nom_tournoi;
    cout << "donner le lieu de tournoi" << endl;
    cin>>lieu_tournoi;
    cout << "donner la date de tournoi" << endl;
    cin>>date_tournoi;
    cout << "donner le nombre de danseurs participants au tournoi" << endl;
    cin>>nombre_danseur_participant;
}
void organisateur::afficher_tournoi()
{
    cout << "*****les details de tournoi*****" << endl;
    cout << "le nom du tournoi est : " << nom_tournoi << endl;
    cout << "le lieu du tournoi est : " << lieu_tournoi << endl;
    cout << "la date du tournoi est : " << date_tournoi << endl;
    cout << "le nombre de danseur participant est : " << nombre_danseur_participant << endl;
}