#include <iostream>
using namespace std;
#include "personnes.h"
#include"personnes.cpp"
#include"danseur.h"
#include"danseur.cpp"
#include <string>
int main()
{
    /* personnes p;
    p.set_personne();
    p.get_personne();
    p.modifier_personne();
    p.get_personne();*/
    danseur d;
    d.enregistrer_danseur();
    d.get_danseur();
    

    return 0;
}
