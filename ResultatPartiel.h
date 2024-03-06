#include "Resultat.h"
#include <string>
#include "score.h"
#include<vector>
using namespace std;
class ResultatPartiel:public Resultat
{
private:
    /* data */
    string commentairePartiel;
    vector<score *> scorePartiel;

public:
    ResultatPartiel(int, float,string=" ");
    friend ostream& operator<<(ostream&, ResultatPartiel&);
    friend istream& operator>>(istream&, ResultatPartiel&);
    ResultatPartiel(const ResultatPartiel&);
    ~ResultatPartiel();
};


