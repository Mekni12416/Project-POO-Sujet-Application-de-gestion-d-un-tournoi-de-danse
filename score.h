#include<vector>
#include "critere.h"
using namespace std;
class score
{
private:
    /* data */
    int numScore;
    int valeur;
    vector<Critere *>  listCrit;

public:
    score(int=0,int=0);
    score(const score&);
    void enregistrerScore();
    ~score();
};


