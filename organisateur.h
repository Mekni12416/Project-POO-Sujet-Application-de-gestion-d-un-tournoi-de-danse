#ifndef organisateur_h
#define organisateur_h
#include<string>
#include"personnes.h"
class organisateur:public personnes
{
 string role;
 int nombre_tournoi_organisee;
 string nom_tournoi;
 string lieu_tournoi;
 string date_tournoi;
 int nombre_danseur_participant;


 public:
   organisateur();
   organisateur(int,string,string,string,string,string,int);
   void set_organisateur();
   void get_organisateur();
   void creer_tournoi();
   void afficher_tournoi();
};

#endif