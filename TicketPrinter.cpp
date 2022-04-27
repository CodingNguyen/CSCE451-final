#include "TicketPrinter.h"

TicketPrinter::TicketPrinter()
{
}

StudentTicket* TicketPrinter::getTicketField()
{
    return this->ticket;
}
void TicketPrinter::SetupTicket(StudentTicket* ticket)
{
     this->ticket = ticket;
}
void TicketPrinter::printUniversity()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getUniversity();
    printf("Universty %s ", s.c_str());
}
void TicketPrinter::printSurname()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getSurname();
    printf("Surname %s ", s.c_str());
}
void TicketPrinter::printStudyType()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getStudyType();
    printf("StudyType %s ", s.c_str());
}
void TicketPrinter::printStructuredUnit()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getStructuredUnit();
    printf("StructuredUnit %s ", s.c_str());
}
void TicketPrinter::printSpecialization()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getSpecialization();
    printf("Specialization %s ", s.c_str());
}
void TicketPrinter::printRectorCredentials()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getRectorCredentials();
    printf("RectorCredentials %s ", s.c_str());
}
void TicketPrinter::printPart()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getPart();
    printf("Part %s ", s.c_str());
}
void TicketPrinter::printName()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getName();
    printf("Name %s ", s.c_str());
}
void TicketPrinter::printIssueDateYear()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getIssueDateYear();
    printf("IssueDateYear %d ", i);
}
void TicketPrinter::printIssueDateMonth()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getIssueDateMonth();
    printf("IssueDateMonth %d ", i);
}
void TicketPrinter::printIssueDateDay()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getIssueDateDay();
    printf("IssueDateDay %d ", i);
}
void TicketPrinter::printId()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getId();
    printf("Id %d ", i);
}
void TicketPrinter::printGroup()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getGroup();
    printf("Group %s ", s.c_str());
}
void TicketPrinter::printFatherName()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getFatherName();
    printf("FatherName %s ", s.c_str());
}
void TicketPrinter::printFaculty()
{
    StudentTicket *t = this->getTicketField();
    string s = t->getFaculty();
    printf("Faculty %s ", s.c_str());
}
void TicketPrinter::printExperationDateYear()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getExperationDateYear();
    printf("ExperationDateYear %d ", i);
}
void TicketPrinter::printExperationDateMonth()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getExperationDateMonth();
    printf("ExperationDateMonth %d ", i);
}
void TicketPrinter::printExperationDateDay()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getExperationDateDay();
    printf("ExperationDateDay %d ", i);
}
void TicketPrinter::printEntranceYear()
{
    StudentTicket *t = this->getTicketField();
    int i = t->getEntranceYear();
    printf("EntranceYear %d ", i);
}
void TicketPrinter::printBarCode() 
{
    printf("BarCode %s\n","< barcode sample >");
}
void TicketPrinter::printPhoto()
{
    printf("Photo %s\n","< photo sample >");
}