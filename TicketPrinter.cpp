#include "TicketPrinter.h"

TicketPrinter::TicketPrinter()
{
}

StudentTicket* TicketPrinter::getTicketField()
{
    return this->ticket;
}
void TicketPrinter::SetupTicket(StudentTicket *ticket)
{
    this->ticket = ticket;
}
void TicketPrinter::printAll()
{
    printf("here \n");
    StudentTicket* t = getTicketField();
    printf("Universty %s \n", t->getUniversity().c_str());
    printf("Surname %s \n", t->getSurname().c_str());
    printf("StudyType %s \n", t->getStudyType().c_str());
    printf("StructuredUnit %s \n", t->getStructuredUnit().c_str());
    printf("Specialization %s \n", t->getSpecialization().c_str());
    printf("RectorCredentials %s \n", t->getRectorCredentials().c_str());
    printf("Part %s \n", t->getPart().c_str());
    printf("Name %s \n", t->getName().c_str());
    printf("IssueDateYear %d \n", t->getIssueDateYear());
    printf("IssueDateMonth %d \n", t->getIssueDateMonth());
    printf("IssueDateDay %d \n", t->getIssueDateDay());
    printf("Id %d \n", t->getId());
    printf("Group %s \n", t->getGroup().c_str());
    printf("FatherName %s \n", t->getFatherName().c_str());
    printf("Faculty %s \n", t->getFaculty().c_str());
    printf("ExperationDateYear %d \n", t->getExperationDateYear());
    printf("ExperationDateMonth %d \n", t->getExperationDateMonth());
    printf("ExperationDateDay %d \n", t->getExperationDateDay());
    printf("EntranceYear %d \n", t->getEntranceYear());
}
