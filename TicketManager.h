#include "common.h"
#include "StudentTicket.h"
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
    bool getTicket(int unkwnParam);

    bool openTicket();
    bool openTicket(int unkwnParam);
    
    void readAllTicketData();

    bool readTicket();
    bool readTicket(int unkwnParam);

    void showTicket();
};