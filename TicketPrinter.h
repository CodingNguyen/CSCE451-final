#ifndef TICKET_PRINTER_H
#define TICKET_PRINTER_H

#include "common.h"
#include "StudentTicket.h"

class TicketPrinter
{
private:
    StudentTicket* ticket;
    
public:
    TicketPrinter();
    void SetupTicket(StudentTicket* s);
    StudentTicket* getTicketField();
    void printAll();
};
#endif