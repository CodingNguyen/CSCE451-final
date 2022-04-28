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

void TicketReader::readUniversity()
{
    StudentTicket *t = this->getTicketField();
    string s;
    getline(cin, s);
    t->setUniversity(s);
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