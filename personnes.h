#ifndef personnes_h
#define personnes_h
using namespace std;
#include <string>
//#include"date.h"
//#include<vector>
class personnes
{
protected:
    int cin_p;
    string nom;
    string prenom;
    string nationalite;
    string date_naissance;


public:
   personnes();
   personnes(int,string,string,string,string);
   void set_personne();
   void get_personne();
   void modifier_personne();
  

};

#endif