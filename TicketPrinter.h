#include "common.h"

class TicketPrinter
{
private:
    string BarCode;
    StudentTicket* ticket;
    
public:
    TicketPrinter();
    void SetupTicket(StudentTicket* s );
    StudentTicket* getTicketFeild();
    void printUniversity();
    void printSurname();
    void printStructuredUnit();
    void printSpecialization();
    void printRectorCredentials();
    void printPart();
    void printName();
    void printIssueDateYear();
    void printIssueDateMonth();
    void printIssueDateDay();
    void printId();
    void printGroup(); 
    void printStudyType(); 
    void printFatherName();
    void printFaculty(); 
    void printExperationDateYear();
    void printExperationDateMonth();
    void printExperationDateDay();
    void printEntranceYear();

    void printPhoto();
    void printBarCode();
};