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
    printf("Universty %s ", t->getUniversity().c_str());
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
    printf("Group %s ", t->getGroup().c_str());
    printf("FatherName %s ", t->getFatherName().c_str());
    printf("Faculty %s ", t->getFaculty().c_str());
    printf("ExperationDateYear %d ", t->getExperationDateYear());
    printf("ExperationDateMonth %d ", t->getExperationDateMonth());
    printf("ExperationDateDay %d ", t->getExperationDateDay());
    printf("EntranceYear %d ", t->getEntranceYear());
}
