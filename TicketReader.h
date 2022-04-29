#ifndef TICKET_READER_H
#define TICKET_READER_H

#include "common.h"
#include "StudentTicket.h"

class TicketReader
{
private:
    StudentTicket* ticket;
    
public:
    TicketReader();
    ~TicketReader();
    StudentTicket* readAll(vector<string> v);
};
#endif