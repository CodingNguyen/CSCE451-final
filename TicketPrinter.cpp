#include "TicketPrinter.h"

TicketPrinter::TicketPrinter()
{
}

StudentTicket* TicketPrinter::getTicketFeild()
{
    return this->ticket;
}
void TicketPrinter::SetupTicket(StudentTicket* ticket)
{
     this->ticket = ticket;
}
void TicketPrinter::printUniversity()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getUniversty();
    printf("Universty %s ", s);
}
void TicketPrinter::printSurname()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getSurname();
    printf("Surname %s ", s);
}
void TicketPrinter::printStudyType()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getStudyType();
    printf("StudyType %s ", s);
}
void TicketPrinter::printStructuredUnit()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getStructuredUnit();
    printf("StructuredUnit %s ", s);
}
void TicketPrinter::printSpecialization()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getSpecialization();
    printf("Specialization %s ", s);
}
void TicketPrinter::printRectorCredentials()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getRectorCredentials();
    printf("RectorCredentials %s ", s);
}
void TicketPrinter::printPart()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getPart();
    printf("Part %s ", s);
}
void TicketPrinter::printName()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getName();
    printf("Name %s ", s);
}
void TicketPrinter::printIssueDateYear()
{
    StudentTicket *t = this->getTicketFeild();
    int i = t->getIssueDateYear();
    printf("IssueDateYear %d ", i);
}
void TicketPrinter::printIssueDateMonth()
{
    StudentTicket *t = this->getTicketFeild();
    int i = t->getIssueDateMonth();
    printf("IssueDateMonth %d ", i);
}
void TicketPrinter::printIssueDateDay()
{
    StudentTicket *t = this->getTicketFeild();
    int i = t->getIssueDateDay();
    printf("IssueDateDay %d ", i);
}
void TicketPrinter::printId()
{
    StudentTicket *t = this->getTicketFeild();
    int i = t->getId();
    printf("Id %d ", i);
}
void TicketPrinter::printGroup()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getGroup();
    printf("Group %d ", s);
}
void TicketPrinter::printFatherName()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getFatherName();
    printf("FatherName %d ", s);
}
void TicketPrinter::printFaculty()
{
    StudentTicket *t = this->getTicketFeild();
    string s = t->getFaculty();
    printf("Faculty %d ", s);
}
void TicketPrinter::printExperationDateYear()
{
    StudentTicket *t = this->getTicketFeild();
    int i = t->getExperationDateYear();
    printf("ExperationDateYear %d ", i);
}
void TicketPrinter::printExperationDateMonth()
{
    StudentTicket *t = this->getTicketFeild();
    int i = t->getExperationDateMonth();
    printf("ExperationDateMonth %d ", i);
}
void TicketPrinter::printExperationDateDay()
{
    StudentTicket *t = this->getTicketFeild();
    int i = t->getExperationDateDay();
    printf("ExperationDateDay %d ", i);
}
void TicketPrinter::printEntranceYear()
{
    StudentTicket *t = this->getTicketFeild();
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