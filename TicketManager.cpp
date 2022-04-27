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

bool TicketManager::getTicket(int i) // with parameter?
{
    char r = readTicket(i);
    if(r)
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
    if(!fp)
    {
        cout << "Ticket not found.\n";
    }

    // returns True is ticket was opened
    return fp != (FILE*)0;
}

void TicketManager::readAllTicketData()
{
    // Todo need, ticketreader class
    TicketReader *readPtr;

    readPtr = getReaderField();
    // TicketReader::readUniversity(readPtr);
    readPtr->readUniversity();

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

bool TicketManager::readTicket(int i) // with parameter?
{
    bool o = openTicket(i);
    if (o == true)
    {
        readAllTicketData();
    }
    return o;
}

void TicketManager::showTicket()
{
    // Todo need, ticketreader class
    TicketPrinter *printPtr;

    printPtr = getPrinterField();
    // TicketPrinter::readUniversity(printPtr);
    printPtr->printUniversity();

    // ... continute pattern ...
}