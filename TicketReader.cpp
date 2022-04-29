#include "TicketReader.h"

TicketReader::TicketReader()
{
}

TicketReader::~TicketReader()
{
}

StudentTicket *TicketReader::getTicketField()
{
    return ticket;
}

StudentTicket* TicketReader::readAll(vector<string> ticketData)
{ 
    StudentTicket sTicket = new StudentTicket();
   if(ticketData.size() != 19)
    {
        printf("ERROR: Expected ticket data with 19 fields, actual: %ld\n", ticketData.size());
        exit(-1);
    }

    try 
    { 

        sTicket->setUniversity(ticketData[0]);
        sTicket->setSurname(ticketData[1]);
        sTicket->setStudyType(ticketData[2]);
        sTicket->setStructuredUnit(ticketData[3]);
        sTicket->setSpecialization(ticketData[4]);
        sTicket->setRectorCredentials(ticketData[5]);
        sTicket->setPart(ticketData[6]);
        sTicket->setName(ticketData[7]);
        sTicket->setIssueDateYear(stoi(ticketData[8]));
        sTicket->setIssueDateMonth(stoi(ticketData[9]));
        sTicket->setIssueDateDay(stoi(ticketData[10]));
        sTicket->setId(stoi(ticketData[11]));
        sTicket->setGroup(ticketData[12]);
        sTicket->setFatherName(ticketData[13]);
        sTicket->setFaculty(ticketData[14]);
        sTicket->setExperationDateYear(stoi(ticketData[15]));
        sTicket->setExperationDateMonth(stoi(ticketData[16]));
        sTicket->setExperationDateDay(stoi(ticketData[17]));
        sTicket->setEntranceYear(stoi(ticketData[18]));
        return sTicket;
    }
    catch(exception &err)
    {
        printf("Read Ticket Data Failure \n");
        exit(-1);
    }
}

void TicketReader::readSurname()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setSurname(s);
}

void TicketReader::readStudyType()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setStudyType(s);
}

void TicketReader::readStructuredUnit()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setStructuredUnit(s);
}

void TicketReader::readSpecialization()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setSpecialization(s);
}

void TicketReader::readRectorCredentials()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setRectorCredentials(s);
}

void TicketReader::readPart()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setPart(s);
}

void TicketReader::readName()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setName(s);
}

void TicketReader::readIssueDateYear()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setIssueDateYear(i);
}

void TicketReader::readIssueDateMonth()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setIssueDateMonth(i);
}

void TicketReader::readIssueDateDay()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setIssueDateDay(i);
}

void TicketReader::readId()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setId(i);
}

void TicketReader::readGroup()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setGroup(s);
}

void TicketReader::readFatherName()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setFatherName(s);
}

void TicketReader::readFaculty()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setFaculty(s);
}

void TicketReader::readexpirationDateYear()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setExperationDateYear(i);
}

void TicketReader::readExperationDateMonth()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setExperationDateMonth(i);
}

void TicketReader::readExperationDateDay()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setExperationDateDay(i);
}

void TicketReader::readEntranceYear()
{
    StudentTicket *t = this->getTicketField();
    int i;
    cin >> i;
    t->setEntranceYear(i);
}