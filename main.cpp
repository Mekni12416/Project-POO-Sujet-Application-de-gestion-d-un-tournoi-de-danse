#include <iostream>
using namespace std;
#include "personnes.cpp"
#include "danseur.cpp"
#include "danseur_amateur.cpp"
#include "danseur_pro.cpp"
#include "critere.h"
#include "organisateur.cpp"
#include "spectateur.cpp"
#include <string>
int main()
{
    /* personnes p;
    p.set_personne();
    p.get_personne();
    p.modifier_personne();
    p.get_personne();*/
    /*danseur d;
    d.enregistrer_danseur();
    d.get_danseur();*/
    /*danseur_amateur a;
    a.enregistrer_danseur_amateur();

    a.afficher_danseur_amateur();

    danseur_pro b;
    b.enregistrer_danseur_pro();
    b.afficher_danseur_pro();
    cout<<"Bonjour";
    Critere c("12kg","forte");
    c.afficher();


    a.afficher_danseur_amateur();*/
    /*danseur_pro b;
    b.enregistrer_danseur_pro();
    b.afficher_danseur_pro();*/
    // organisateur o;
    // o.set_organisateur();
    // o.get_organisateur();
    // o.creer_tournoi();
    // o.afficher_tournoi();
    /*spectateur s1, s2;
    s1.acheter_tiquet();
    s1.get_spectateur();
    s2.acheter_tiquet();
    s2.get_spectateur();*/
    /*personnes p;
    cin>>p;
    cout<<p;*/
    danseur d;
    d.enregistrer_danseur();
    cout << d;

    return 0;
}
