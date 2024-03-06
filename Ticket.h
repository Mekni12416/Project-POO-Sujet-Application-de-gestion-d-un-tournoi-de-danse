
class Ticket
{
private:
    /* data */
    int num_ticket;
    float prix;
public:
    Ticket(int=0,float=100);
    ~Ticket();
    Ticket(const Ticket&);
};

