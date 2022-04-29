#include "TicketReader.h"

TicketReader::TicketReader()
{
}

TicketReader::~TicketReader()
{
}



StudentTicket* TicketReader::readAll(vector<string> ticketData)
{ 
    StudentTicket sTicket = new StudentTicket();
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
        return sTicket;
    }
    catch(exception &err)
    {
        printf("Read Ticket Data Failure \n");
        exit(-1);
    }
}

