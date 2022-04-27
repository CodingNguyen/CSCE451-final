#include "TicketManager.h"

TicketManager::TicketManager()
{
    this->sTicket = new StudentTicket;
    this->tReader = new TicketReader;
    this->tPrinter = new TicketPrinter;
}

TicketManager::~TicketManager()
{

}

//not confident about this
void TicketManager::fIdSetup(long ID)
{
    this->id = ID;
}

// not cofident about this
void TicketManager::fPartSetup(string s)
{
    this->parts = s;
}

int TicketManager::getfId() /*not sure about return yet*/
{
    return id;
}

string TicketManager::getfPart() /*not sure about return yet*/
{
    return parts;
}

TicketPrinter* TicketManager::getPrinterField() /*not sure about return yet*/
{
    return tPrinter;
}

TicketReader* TicketManager::getReaderField()
{
    return tReader;
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


StudentTicket* TicketManager::getTicketField()
{
    return sTicket;
}

bool TicketManager::openTicket()
{
    FILE *fp;
    int i;
    string buf = "./data" + parts + "_" + to_string(id);

    fp = fopen(buf.c_str(), "r");
    //TODO add helper function to read from file. 
    if(!fp)
    {
        cout << "Ticket not found.\n";
    }

    // returns True is ticket was opened
    return fp != (FILE*)0;
}

void TicketManager::readAllTicketData()
{
    
    this->tReader->readUniversity();

    // ... continute pattern ...
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

void TicketManager::showTicket()
{

    this->tPrinter->printUniversity();
    this->tPrinter->printBarCode();
    ///......

}