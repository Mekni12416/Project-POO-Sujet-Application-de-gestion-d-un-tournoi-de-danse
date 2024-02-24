#ifndef danseur_amateur_h
#define danseur_amateur_h
#include"danseur.h"
#include<string>
class danseur_amateur:public danseur
{
    string niveau_entrenement;
    public:
    danseur_amateur();
    danseur_amateur(int, string, string, string, string, string,string);
    void enregistrer_danseur_amateur();
    void afficher_danseur_amateur();
};

#endif