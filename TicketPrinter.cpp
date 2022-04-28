#include "TicketPrinter.h"

TicketPrinter::TicketPrinter()
{
}

StudentTicket *TicketPrinter::getTicketFeild()
{
    return this->ticket;
}
void TicketPrinter::SetupTicket(StudentTicket *ticket)
{
    this->ticket = ticket;
}
void TicketPrinter::printAll()
{
    StudentTicket* t = getTicketFeild();
    printf("Universty %s ", t->getUniversty());
    printf("Surname %s ", t->getSurname());
    printf("StudyType %s ", t->getStudyType());
    printf("StructuredUnit %s ", t->getStructuredUnit());
    printf("Specialization %s ", t->getSpecialization());
    printf("RectorCredentials %s ", t->getRectorCredentials());
    printf("Part %s ", t->getPart());
    printf("Name %s ", t->getName());
    printf("IssueDateYear %d ", t->getIssueDateYear());
    printf("IssueDateMonth %d ", t->getIssueDateMonth());
    printf("IssueDateDay %d ", t->getIssueDateDay());
    printf("Id %d ", t->getId());
    printf("Group %d ", t->getGroup());
    printf("FatherName %d ", t->getFatherName());
    printf("Faculty %d ", t->getFaculty());
    printf("ExperationDateYear %d ", t->getExperationDateYear());
    printf("ExperationDateMonth %d ", t->getExperationDateMonth());
    printf("ExperationDateDay %d ", t->getExperationDateDay());
    printf("EntranceYear %d ", t->getEntranceYear());
}
