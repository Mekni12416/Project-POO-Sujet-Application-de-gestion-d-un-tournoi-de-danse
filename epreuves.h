#include<string>
#include<ios>
using namespace std;
class Epreuves
{
private:
    /* data */
    int num_epreuves;
    string heure_epreuves;
public:
    Epreuves(int=0,string=" ");
    Epreuves(const Epreuves &e);
    void afficher_epreuves();
    friend ostream& operator<<(ostream&, Epreuves&);
    friend istream& operator>>(istream&, Epreuves&);
    ~Epreuves();
};


