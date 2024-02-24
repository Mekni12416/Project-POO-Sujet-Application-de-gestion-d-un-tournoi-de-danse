#ifndef danseur_pro_h
#define danseur_pro_h
#include"danseur.h"
#include <string>
class danseur_pro:public danseur
{
    int annee_experience;
    string palmares;

public:
    danseur_pro();
    danseur_pro(int, string, string, string, string, string, int, string);
    void enregistrer_danseur_pro();
    void afficher_danseur_pro();
};

#endif