#ifndef danseur_h
#define danseur_h
#include "personnes.h"
#include <string>
class danseur : public personnes
{
protected:
    string style_danse;

public:
    danseur();
    danseur(int, string, string, string, string, string);
    void enregistrer_danseur();
    void get_danseur();
};

#endif