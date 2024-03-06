
#include "Ticket.h"
using namespace std;

Ticket::Ticket(int num ,float prix)
{
    this->num_ticket= num;
    this->prix= prix;
}

Ticket::~Ticket()
{
}

Ticket::Ticket(const Ticket& t)
{
    this->num_ticket = t.num_ticket;
    this->prix = t.prix;
}
