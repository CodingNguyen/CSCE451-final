#include "common.h"
#include "StudentTicket.h"

class TicketManager
{
private:
    TicketReader *tReader; // not defined yet
    StudentTicket *sTicket; // not defined yet
    TicketPrinter *tPrinter; // not defined yet
    string parts;
    int id;

public:
    TicketManager();
    ~TicketManager();

    void fIdSetup(long ID);
    void fPartSetup(string s);
    int getfId();
    string getfPart();
    TicketPrinter getPrinterField();
    TicketReader getReaderField();

    bool getTicket();
    bool getTicket(int unkwnParam);
    void getTicketField();

    bool openTicket();
    bool openTicket(int unkwnParam);
    
    void readAllTicketData();

    bool readTicket();
    bool readTicket(int unkwnParam);

    void showTicket();
};