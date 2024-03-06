#include<string>
using namespace std;
class Recompenses
{
private:
    /* data */
    int num_recom;
    string medailles, trophee;

public:
    Recompenses(int=0,string=" ",string=" ");
    Recompenses(const Recompenses&);
    friend ostream& operator<<(ostream&, Recompenses&);
    friend istream& operator>>(istream&, Recompenses&);
    ~Recompenses();
};


