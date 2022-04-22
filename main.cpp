//where is get barcode???

#include "common.h"
#include "TicketManager.h"
#include "StudentTicket.h"

int getPartFromCommandLine(int argc, char *argv[])
{
    return 1;
}
int getIdFromCommandLine(int argc, char *argv[])
{
    return 1;
}

int main(int argc, char *argv[])
{
    bool badInput;
    getPartFromCommandLine(argc,argv); 
    getIdFromCommandLine(argc,argv); 
    int ID = 0;
    
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