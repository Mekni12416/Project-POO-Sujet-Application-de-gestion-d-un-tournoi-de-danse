using namespace std;
#include<ios>
class Resultat
{
private:
    /* data */
    int num_res;
    float note;
public:
    Resultat(int=0,float=0);
    Resultat(const Resultat&);
    friend ostream& operator<<(ostream&, Resultat&);
    friend istream& operator>>(istream&, Resultat&);
    ~Resultat();
};

