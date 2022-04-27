#include "common.h"
#include "TicketManager.h"

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        puts("usage: x Part Id");
        exit();
    }

    bool badInput;
    string part = argv[1]; 
    int id = stoi(argv[2]); 

    if (id == 0) // bad input if id is 0
    {
        puts("usage: x Part Id");
    }
    else // good input
    {
        TicketManager *t = new TicketManager();

        t->fPartSetup(part);
        t->fIdSetup(id);
        bool gotTicket = t->getTicket();
        delete t;
    }
    
    return 0;
}