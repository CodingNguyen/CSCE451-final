void TicketManager::ReadAllTicketData()
{
    return tReader;
}

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