#include "TicketManager.h"

TicketManager::TicketManager()
{
    this->sTicket = new StudentTicket;
    this->tReader = new TicketReader;
    this->tPrinter = new TicketPrinter;
}

TicketManager::~TicketManager()
{

}

//not confident about this
void TicketManager::fIdSetup(long ID)
{
    this->id = ID;
}

// not cofident about this
void TicketManager::fPartSetup(string s)
{
    this->parts = s;
}

int TicketManager::getfId() /*not sure about return yet*/
{
    return id;
}

string TicketManager::getfPart() /*not sure about return yet*/
{
    return parts;
}

TicketPrinter* TicketManager::getPrinterField() /*not sure about return yet*/
{
    return tPrinter;
}

TicketReader* TicketManager::getReaderField()
{
    return tReader;
}

bool TicketManager::getTicket()
{
    bool r = readTicket();
    printf("read2");
    if (r == true)
    {
	printf("showing Ticket");
    showTicket();
    }
    else
    {
        printf("Failed to show ticket\n");

    }
    return r;
}


StudentTicket* TicketManager::getTicketField()
{
    return sTicket;
}

bool TicketManager::openTicket()
{
    //FILE *fp;
    string buf = "./data" + parts + "_" + to_string(id);
    vector<string> vecOfStr;

    std::ifstream in(buf.c_str());
    if(!in)
    {
        cout << "Ticket not found.\n";
        return false;
    }

    //fp = fopen(buf.c_str(), "r");
    //TODO add helper function to read from file. 
    
    std::string str;
    // Read the next line from File untill it reaches the end.
    while (std::getline(in, str))
    {
        // Line contains string of length > 0 then save it in vector
        if(str.size() > 0)
        {
            vecOfStr.push_back(str);
        }
    }
    //Close The File
    in.close();

    // returns True is ticket was opened
    this->ticketData = vecOfStr;
    return true;
}

void TicketManager::readAllTicketData()
{
    // tReader->readUniversity();
    // tReader->readSurname();
    // tReader->readStudyType();
    // tReader->readStructuredUnit();
    // tReader->readSpecialization();
    // tReader->readRectorCredentials();
    // tReader->readPart();
    // tReader->readName();
    // tReader->readIssueDateYear();
    // tReader->readIssueDateMonth();
    // tReader->readIssueDateDay();
    // tReader->readId();
    // tReader->readGroup();
    // tReader->readFatherName();
    // tReader->readFaculty();
    // tReader->readexpirationDateYear();
    // tReader->readExperationDateMonth();
    // tReader->readExperationDateDay();
    // tReader->readEntranceYear();

    if(ticketData.size() != 19)
    {
        printf("ERROR: Expected ticket data with 19 fields, actual: %ld\n", ticketData.size());
        exit(-1);
    }

    try 
    { 

        sTicket->setUniversity(ticketData[0]);
        sTicket->setSurname(ticketData[1]);
        sTicket->setStudyType(ticketData[2]);
        sTicket->setStructuredUnit(ticketData[3]);
        sTicket->setSpecialization(ticketData[4]);
        sTicket->setRectorCredentials(ticketData[5]);
        sTicket->setPart(ticketData[6]);
        sTicket->setName(ticketData[7]);
        sTicket->setIssueDateYear(stoi(ticketData[8]));
        sTicket->setIssueDateMonth(stoi(ticketData[9]));
        sTicket->setIssueDateDay(stoi(ticketData[10]));
        sTicket->setId(stoi(ticketData[11]));
        sTicket->setGroup(ticketData[12]);
        sTicket->setFatherName(ticketData[13]);
        sTicket->setFaculty(ticketData[14]);
        sTicket->setExperationDateYear(stoi(ticketData[15]));
        sTicket->setExperationDateMonth(stoi(ticketData[16]));
        sTicket->setExperationDateDay(stoi(ticketData[17]));
        sTicket->setEntranceYear(stoi(ticketData[18]));

    }
    catch(exception &err)
    {
        printf("does puts even work");
        puts("Read ticket data failure");
        exit(-1);
    }
}

bool TicketManager::readTicket()
{
    bool o = openTicket();
    if (o == true)
    {
        printf("Reading ticket data\n");
        readAllTicketData();
        printf("read ticket data\n");

    }
    else
    {
        printf("Failed to open ticket\n");
    }

    return o;
}

void TicketManager::showTicket()
{
    printf("inside");
    this->tPrinter->printAll();
}
