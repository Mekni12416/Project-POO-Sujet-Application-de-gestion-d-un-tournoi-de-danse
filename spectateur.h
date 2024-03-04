#ifndef spectateur_h
#define spectateur_h
#include "personnes.h"
#include <string>
class spectateur:public personnes
{
 int num_tiquet;
 public:
   spectateur();
   spectateur(int,string,string,string,string,int);
   void acheter_tiquet();
   void get_spectateur();
  
};

#endif