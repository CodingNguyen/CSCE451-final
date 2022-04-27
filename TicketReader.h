#ifndef TICKET_READER_H
#define TICKET_READER_H

#include "common.h"
#include "StudentTicket.h"
#include "Reader.h"

class TicketReader
{
private:
    StudentTicket* ticket;
    
public:
    TicketReader();
    ~TicketReader();
    StudentTicket* getTicketField();
    void SetupTicket(StudentTicket* s);
    void readUniversity();
    void readSurname();
    void readStudyType();
    void readStructuredUnit();
    void readSpecialization();
    void readRectorCredentials();
    void readPart();
    void readName();
    void readIssueDateYear();
    void readIssueDateMonth();
    void readIssueDateDay();
    void readId();
    void readGroup();
    void readFatherName();
    void readFaculty();
    void readexpirationDateYear();
    void readExperationDateMonth();
    void readExperationDateDay();
    void readEntranceYear();
};
#endif