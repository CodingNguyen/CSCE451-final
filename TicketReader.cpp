#include "TicketReader.h"

TicketReader::TicketReader()
{

}
TicketReader::~TicketReader()
{

}

void TicketReader::readUniversty()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();        
t->setUniversty(s);
}
void TicketReader::readSurname()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();        
t->setSurname(s);
}
void TicketReader::readStudyType()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setStudyType(s);
}
void TicketReader::readStructuredUnit()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setStructuredUnit(s);
}
void TicketReader::readSpecialization()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setSpecialization(s);
}
void TicketReader::readRectorCredentials()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setRectorCredentials(s);
}
void TicketReader::readPart()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setPart(s);
}
void TicketReader::readName()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setName(s);
}
void TicketReader::readIssueDateYear()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setIssueDateYear(i);
}
void TicketReader::readIssueDateMonth()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setIssueDateMonth(i);
}
void TicketReader::readIssueDateDay()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setIssueDateDay(i);
}
void TicketReader::readId()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setId(i);
}
void TicketReader::readGroup()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setGroup(s);
}
void TicketReader::readFatherName()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setFatherName(s);
}
void TicketReader::readFaculty()
{
StudentTicket* t = this->getTicketFeild();
string s = Reader::readStringLine();
t->setFaculty(s);
}
void TicketReader::readexpirationDateYear()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setExperationDateYear(i);
}
void TicketReader::readExperationDateMonth()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setExperationDateMonth(i);
}
void TicketReader::readExperationDateDay()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setExperationDateDay(i);
}
void TicketReader::readEntranceYear()
{
StudentTicket* t = this->getTicketFeild();
int i = Reader::readIntLine();
t->setEntranceYear(i);
}