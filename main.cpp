#include <iostream>
using namespace std;
#include "personnes.cpp"
#include "danseur.cpp"
#include "danseur_amateur.cpp"
#include "danseur_pro.cpp"
#include"organisateur.cpp"
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
    a.afficher_danseur_amateur();*/
    /*danseur_pro b;
    b.enregistrer_danseur_pro();
    b.afficher_danseur_pro();*/
    organisateur o;
    //o.set_organisateur();
    //o.get_organisateur();
    o.creer_tournoi();
    o.afficher_tournoi();

        return 0;
}
