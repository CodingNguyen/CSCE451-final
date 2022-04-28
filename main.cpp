#include "common.h"
#include "TicketManager.h"

int main(int argc, char *argv[])
{
    if (argc != 3) //always break if too many or too few inputs
    {
        puts("usage: x Part Id");
        exit(0);
    }

    string part = argv[1];
    int id = 0;
    try 
    { 
        id = stoi(argv[2]); //STOI is considered an unsafe method, try catch required
    }
    catch (exception &err)
    {
        puts("usage: x Part Id");
        exit(0);
    }

    if (id == 0 || part == "" || id<0) // bad input if id is 0
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
