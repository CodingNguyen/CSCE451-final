//where is get barcode???
#include "common.h"
#include "TicketManager.h"

int main(int argc, char *argv[])
{
    bool badInput;
    // getPartFromCommandLine(); not defined yet
    int ID = 0; // getIdFromCommandLine(); not defined yet
    
    if (ID != 0)
    {
        badInput = false;
    }
    else
    {
        badInput = true;
    }

    if (badInput)
    {
        puts("usage: x Part Id");
    }
    else // good input
    {
        // TicketManager *t = new TicketManager();

        // t->fPartSetup("test");
        // t->fIdSetup(ID);
        // bool gotTicket = t->getTicket();

        // if (gotTicket == false)
        // {
        //     delete t;
        // }
    }
    
    return 0;
}