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
    StudentTicket* t = getTicketFeild();
    printf("Universty %s ", t->getUniversty().c_str());
    printf("Surname %s ", t->getSurname().c_str());
    printf("StudyType %s ", t->getStudyType().c_str());
    printf("StructuredUnit %s ", t->getStructuredUnit().c_str());
    printf("Specialization %s ", t->getSpecialization().c_str());
    printf("RectorCredentials %s ", t->getRectorCredentials().c_str());
    printf("Part %s ", t->getPart().c_str());
    printf("Name %s ", t->getName().c_str());
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
