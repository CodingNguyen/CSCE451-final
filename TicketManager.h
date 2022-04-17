#include "common.h"

class TicketManager
{
private:
    // TicketReader *tReader; not defined yet
    // StudentTicket *sTicket; not defined yet
    // TicketPrinter *tPrinter; not defined yet
    string parts;
    int id;

public:
    TicketManager();

    void fPartSetup(string s);
    void fIdSetup(long ID);
    bool readTicket();
    bool openTicket();
    bool showTicket();
    bool getTicket();
    // TicketReader* getReaderField(); Ticket reader not defined yet

    void readAllTicketData(); // Might be in TicketReader actually / not defined yet
};