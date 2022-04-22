#include "TicketManager.h"


TicketManager::TicketManager()
{
    this->sTicket = new StudentTicket();
    this->tReader = new TicketReader();
    this->tPrinter = new TicketPrinter();
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
StudentTicket* TicketManager::getTicketField()
{
    return sTicket;
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



bool TicketManager::openTicket()
{
    FILE *fp;

    // memory leak?
    int i;
    // i = *(int*)(GS_OFFSET + 0x14)

    char *buf = new char[100];
    TicketManager tmArr[24]; // array of Ticket Managers? Not sure if error of decompilation
    long id = getfId(); // why call getfId within own class
    
    // getfPart(); // called but not set to anything? Idk
    // assumption...
    const char *str = getfPart().c_str();
    sprintf(buf, "./data%s_%lld", str, id);

    // using a file pointer to read standard in for some reason
    fp = freopen(buf, "r", stdin);
    if(fp == (FILE*)0)
    {
        puts("Ticket not found.");
    }

    // not sure what the other if statement is checking
    // "if(i == *(int*)(in_GS_OFFSET + 0x14))"
    return fp != (FILE*)0;
}

bool TicketManager::openTicket(int i) // with parameter?
{
    // another mem leak?
    char *buf = new char[100];
    FILE *fp;

    sprintf(buf, "./data/%u", i);
    
    if(fp == (FILE*)0)
    {
        puts("Ticket not found.");
    }
    return fp != (FILE*)0;
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
    TicketPrinter* printPtr;
    printPtr = this->getPrinterField();

    printPtr->printUniversty();
    printPtr->printSurname();
    printPtr->printStudyType();
    printPtr->printStructuredUnit();
    printPtr->printSpecialization();
    printPtr->printRectorCredentials();
    printPtr->printPart();
    printPtr->printName();
    printPtr->printIssueDateYear();
    printPtr->printIssueDateMonth();
    printPtr->printIssueDateDay();
    printPtr->printId();
    printPtr->printGroup();
    printPtr->printFatherName();
    printPtr->printFaculty();
    printPtr->printExperationDateYear();
    printPtr->printExperationDateMonth();
    printPtr->printExperationDateDay();
    printPtr->printEntranceYear();
    printPtr->printPhoto();
    printPtr->printBarCode();
   

}

void TicketManager::readAllTicketData()
{
    TicketReader* readptr;
    readptr = this->getReaderField();

    readptr->readUniversty();
    readptr->readSurname();
    readptr->readStudyType();
    readptr->readStructuredUnit();
    readptr->readSpecialization();
    readptr->readRectorCredentials();
    readptr->readPart();
    readptr->readName();
    readptr->readIssueDateYear();
    readptr->readIssueDateMonth();
    readptr->readIssueDateDay();
    readptr->readId();
    readptr->readGroup();
    readptr->readFatherName();
    readptr->readFaculty();
    readptr->readexpirationDateYear();
    readptr->readExperationDateMonth();
    readptr->readExperationDateDay();
    readptr->readEntranceYear();
}