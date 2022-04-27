#include "TicketReader.h"

TicketReader::TicketReader()
{
}

TicketReader::~TicketReader()
{
}

StudentTicket* TicketReader::getTicketField()
{
    return ticket;
}

void TicketReader::readUniversity()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setUniversity(s);
}
void TicketReader::readSurname()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setSurname(s);
}
void TicketReader::readStudyType()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setStudyType(s);
}
void TicketReader::readStructuredUnit()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setStructuredUnit(s);
}
void TicketReader::readSpecialization()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setSpecialization(s);
}
void TicketReader::readRectorCredentials()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setRectorCredentials(s);
}
void TicketReader::readPart()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setPart(s);
}
void TicketReader::readName()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setName(s);
}
void TicketReader::readIssueDateYear()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setIssueDateYear(i);
}
void TicketReader::readIssueDateMonth()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setIssueDateMonth(i);
}
void TicketReader::readIssueDateDay()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setIssueDateDay(i);
}
void TicketReader::readId()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setId(i);
}
void TicketReader::readGroup()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setGroup(s);
}
void TicketReader::readFatherName()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setFatherName(s);
}
void TicketReader::readFaculty()
{
    StudentTicket *t = this->getTicketField();
    string s = Reader::readStringLine();
    t->setFaculty(s);
}
void TicketReader::readexpirationDateYear()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setExperationDateYear(i);
}
void TicketReader::readExperationDateMonth()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setExperationDateMonth(i);
}
void TicketReader::readExperationDateDay()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setExperationDateDay(i);
}
void TicketReader::readEntranceYear()
{
    StudentTicket *t = this->getTicketField();
    int i = Reader::readIntLine();
    t->setEntranceYear(i);
}