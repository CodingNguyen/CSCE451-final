#ifndef TICKET_MANAGER_H
#define TICKET_MANAGER_H

#include "common.h"
#include "TicketReader.h"
#include "TicketPrinter.h"

class TicketManager
{
private:
    TicketReader *tReader; 
    StudentTicket *sTicket; 
    TicketPrinter *tPrinter; 
    string parts;
    int id;
    std::vector<std::string> ticketData;

public:
    TicketManager();
    ~TicketManager();

    void fIdSetup(long ID);
    void fPartSetup(string s);
    int getfId();
    string getfPart();
    TicketPrinter* getPrinterField();
    TicketReader* getReaderField();
    StudentTicket* getTicketField();
    
    bool getTicket();
    bool readTicket();
    bool openTicket();
    void readAllTicketData();
    void showTicket();
};
#endif
