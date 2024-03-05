#include <string>
using namespace std;
class Critere
{
private:
    /* data */
    string poids;
    string description;
public:
    Critere(string=" ", string=" ");
    Critere(const Critere&);
    void saisirScore();
    void afficher();
/*
    ~Critere(){} */
};

