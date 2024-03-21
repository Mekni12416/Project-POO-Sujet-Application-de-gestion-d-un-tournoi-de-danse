#include <iostream>
using namespace std;
#include "personnes.cpp"
#include "danseur.cpp"
#include "danseur_amateur.cpp"
#include "danseur_pro.cpp"
#include "organisateur.cpp"
#include "spectateur.cpp"
#include <string>
#include <vector>
int main()
{
    int ch;
    cout << "&&&&&&&&& MENU PRINCIPALE DE L'APPLICATION &&&&&&&&&" << endl;
    cout << "choisisez parmi les propositions suivantes" << endl;
    cout << endl;
    cout << "1-enregistrer les danseurs" << endl;
    cout << "2-afficher information" << endl;
    cout << "3-creation d'un tournoi" << endl;
    cout << "4-affichage de tournoi" << endl;
    cout << "5-score" << endl;
    cout << "6-spectateur" << endl;
    cout << endl;
    cout << "donner le choix" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "///////////MENU DE L ENREGISTREMENT DES DANSEURS///////////" << endl;
        cout << "*************pour saisir les danseurs faire***********" << endl;
        char choix;
        int rep;
        do
        {
            cout << "choisir si le danseur est amateur tapez(A) ou bien pro tapez(P)" << endl;

            cout << "donner le choix" << endl;
            cin >> choix;
            danseur_amateur a;
            danseur_pro p;
            if (choix == 'A' || choix == 'a')
            {
                int n;
                cout << "combien de danseur amateur voulez vous enregistrer " << endl;
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    cout << "saisir le danseur num " << i + 1 << endl;
                    a.enregistrer_danseur_amateur();
                }
            }
            else if (choix == 'P' || choix == 'p')
            {
                int n;
                cout << "combien de danseur pro voulez vous enregistrer " << endl;
                cin >> n;
                for (int i = 0; i < n; i++)
                {
                    cout << "saisir le danseur num " << i + 1 << endl;
                    p.enregistrer_danseur_pro();
                }
            }
            else
                cout << "choix invalide" << endl;

            cout << "voulez vous continuer si oui tapez 1 sinon tapez 0" << endl;
            cin >> rep;
        } while (rep == 1);
    }

    return 0;
}
