//where is get barcode???

#include "common.h"
#include "TicketManager.h"
#include "StudentTicket.h"

string getPartFromCommandLine(int argc, char *argv[])
{
    if(argc < 2)
    {
        return;
    }
    else{
        return argv[1];
    }
}
int getIdFromCommandLine(int argc, char *argv[])
{
    if(argc < 3)
    {
        return;
    }
    else{
        return stoi(argv[2]);
    }
}

int main(int argc, char *argv[])
{
    bool badInput;
    string part = getPartFromCommandLine(argc,argv); 
    int ID = getIdFromCommandLine(argc,argv); 
    
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
        TicketManager *t = new TicketManager();

        t->fPartSetup(part);
        t->fIdSetup(ID);
        bool gotTicket = t->getTicket();

        if (gotTicket == false)
        {
            delete t;
        }
    }
    
    return 0;
}