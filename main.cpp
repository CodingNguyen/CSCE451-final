//where is get barcode???
#include "TicketManager.h"

int main(int argc, char *argv[])
{
    bool badInput;
    getPartFromCommandLine();
    int id = getIdFromCommandLine();
    
    if (id != 0)
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
        TicketManager t = new TicketManager();

        t.fPartSetup();
        t.fIdSetup();
        bool gotTicket = t.getTicket();

        if (gotTicket == false)
        {
            delete t;
        }
    }
    return 0;
}