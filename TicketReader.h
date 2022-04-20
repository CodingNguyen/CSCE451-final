#include "common.h"
#include "StudentTicket.h"
#include "Reader.h"

class TicketReader
{
private:

    StudentTicket* ticket;
    
public:
    TicketReader::TicketReader();
    TicketReader::~TicketReader();
    StudentTicket* getTicketFeild();
    void SetupTicket(StudentTicket* s);
    void TicketReader::readUniversty();
    void TicketReader::readSurname();
    void TicketReader::readStudyType();
    void TicketReader::readStructuredUnit();
    void TicketReader::readSpecialization();
    void TicketReader::readRectorCredentials();
    void TicketReader::readPart();
    void TicketReader::readName();
    void TicketReader::readIssueDateYear();
    void TicketReader::readIssueDateMonth();
    void TicketReader::readIssueDateDay();
    void TicketReader::readId();
    void TicketReader::readGroup();
    void TicketReader::readFatherName();
    void TicketReader::readFaculty();
    void TicketReader::readexpirationDateYear();
    void TicketReader::readExperationDateMonth();
    void TicketReader::readExperationDateDay();
    void TicketReader::readEntranceYear();
};