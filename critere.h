#include <string>
#include<ios>
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
    void saisirCritere();
    friend ostream& operator<<(ostream&, Critere&);
    friend istream& operator>>(istream&, Critere&);
    void afficher();
/*
    ~Critere(){} */
};

