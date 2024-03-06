#include <iostream>
using namespace std;
#include "spectateur.h"
#include <string>
#include <ctime>
//constructeur par deffaut pour spectateur
spectateur::spectateur(){
    personnes();
    num_tiquet=0;
}
//constructeur pour spectateur
spectateur::spectateur(int cin_p, string nom, string prenom, string nationalite, string date_naissance, int num_tiquet){
    personnes(cin_p, nom, prenom, nationalite, date_naissance);
    this->num_tiquet=num_tiquet;
}
//methode seter pour spectateur
void spectateur::acheter_tiquet(){
    personnes::set_personne();
    int choix;
    cout<<"voulez vous acheter une tiquet de quelle ordre si de premier ordre tapez 1 si de deuxieme ordre tapez 2"<<endl;
    cin>>choix;
    if(choix==1){
        cout<<"le prix de cette tiquet est 30 dt"<<endl;
        num_tiquet=rand();
        cout<<"votre tiquet de premier ordre est reserver pour un numero"<<num_tiquet<<endl;

    }
    if(choix==2){
        cout<<"le prix de cette tiquet est 20 dt"<<endl;
        num_tiquet=rand();
        cout<<"votre tiquet de deuxieme ordre est reserver pour un numero"<<num_tiquet<<endl;

    }
}
//methode geter pour spectateur
void spectateur::get_spectateur(){
    personnes::get_personne();
    cout<<"le num de tiquet est :  "<< num_tiquet<<endl;
}
