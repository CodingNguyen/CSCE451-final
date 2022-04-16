//where is get barcode???

class TicketManager
{
public:
    StudentTicket *sTicket;
    TicketReader *tReader;
    TicketPrinter *tPrinter;
    TicketManager();
    void fPartSetup(string s);
    void fIdSetup(long ID);
    int id;
    string parts;
    bool getTicket();
};
void TicketManager::TicketManager()
{
    this.sTicket = new StudentTicket;
    this->tReader = new TicketReader;
    this->tPrinter = new TicketPrinter;
}

//not cofident about this
void TicketManager::fPartSetup(string s)
{
    this.parts = s;
}
//not confident about this
void TicketManager::fIdSetup(long ID)
{
    this.id = ID;
}
bool TicketManager::getTicket()
{
    bool r = readticket();
    if (r == true)
    {
        showticket();
    }
    return r;
}
bool TicketManager::readTicket()
{
    bool o = openTicket();
    if (o == true)
    {
        ReadAllTicketData();
    }
    return o;
}
bool TicketManager::openTicket()
{
    //use file IO
}
void TicketManager::readAllTicketData()
{
    ////?????????????
}

bool TicketManager::showTicket()
{
    char c = readticket();
    if (c == '\x01')
    {
        showticket();
        return true;
    }
    return false;
}

int main(int argc, char *argv[])
{
    bool badInput;
    getPartFromCommandLine();
    int id = getIdFromCommandLine();
    if (id != 0)
    {
        badInput = false;
    }
    else
    {
        badInput = true;
    }

    if (badInput)
    {
        puts("usage: x Part Id");
    }
    //good input detected
    else
    {
        TicketManager t = new TicketManager();
        t.fPartSetup();
        t.fIdSetup();
        bool gotTicket = t.getTicket();
        if (gotTicket == false)
        {

            delete t;
        }
    }
    return 0;
}