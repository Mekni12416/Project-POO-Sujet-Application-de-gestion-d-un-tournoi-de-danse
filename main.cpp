#include <iostream>
using namespace std;
#include "personnes.h"
#include <string>
#include"personnes.cpp"

int main()
{
    personnes p;
    
    p.set_personne();
    p.get_personne();
    p.modifier_personne();
    p.get_personne();

    return 0;
}
