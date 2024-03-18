#ifndef juge_h
#define juge_h
#include "personnes.h"
#include <string>

class juge : public personnes
{
    string specialite;

public:
  juge();
  juge(int, string, string, string, string, string);
  void afficher_juge();
  void calcul_note();
  void attribuer_score(danseur& , float);
  float obtenir_score(danseur&);

};
#endif
