#include "TicketManager.h"

// void TicketManager::ReadAllTicketData()
// {
//     return tReader;
// }

TicketManager::TicketManager()
{
    // other classes not defined yet
    // this->sTicket = new StudentTicket;
    // this->tReader = new TicketReader;
    // this->tPrinter = new TicketPrinter;
}

// not cofident about this
void TicketManager::fPartSetup(string s)
{
    this->parts = s;
}

//not confident about this
void TicketManager::fIdSetup(long ID)
{
    this->id = ID;
}

bool TicketManager::getTicket()
{
    bool r = readTicket();
    if (r == true)
    {
        showTicket();
    }
    return r;
}

bool TicketManager::readTicket()
{
    bool o = openTicket();
    if (o == true)
    {
        readAllTicketData();
    }
    return o;
}

bool TicketManager::openTicket()
{
    //use file IO
}

void TicketManager::readAllTicketData()
{
    ////?????????????
}

bool TicketManager::showTicket()
{
    char c = readTicket();
    if (c == '\x01')
    {
        showTicket();
        return true;
    }
    return false;
}