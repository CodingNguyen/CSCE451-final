class TicketManager
{
private:
    TicketReader *tReader;
public:
    StudentTicket *sTicket;
    TicketPrinter *tPrinter;
    string parts;
    int id;

    TicketManager();

    void fPartSetup(string s);
    void fIdSetup(long ID);
    bool getTicket();
    TicketReader* getReaderField();

    void ReadAllTicketData();
};