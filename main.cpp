//where is get barcode???

#include "common.h"
#include "TicketManager.h"

class StudentTicket
{
private:
    string Universty;
    string Surname;
    string StudyType;
    string StructuredUnit;
    string Specialization;
    string RectorCredentials;
    string Part;
    string Name;
    int IssueDateYear;
    int IssueDateMonth;
    int IssueDateDay;
    int Id;
    string Group;
    string FatherName;
    string Faculty;
    int ExplorationDateYear;
    int ExperationDateMonth;
    int ExperationDateDay;
    int EntranceYear;

public:
    void setUniversty(string s);
    void setSurname(string s);
    void setStudyType(string s);
    void setStructuredUnit(string s);
    void setSpecialization(string s);
    void setRectorCredentials(string s);
    void setPart(string s);
    void setName(string s);
    void setIssueDateYear(int i);
    void setIssueDateMonth(int i);
    void setIssueDateDay(int i);
    void setId(int i);
    void setGroup(string s);
    void setFatherName(string s);
    void setFaculty(string s);
    void setExplorationDateYear(int i);
    void setExperationDateMonth(int i);
    void setExperationDateDay(int i);
    void setEntranceYear(int i);

    string getUniversty();
    string getSurname();
    string getStudyType();
    string getStructuredUnit();
    string getSpecialization();
    string getRectorCredentials();
    string getPart();
    string getName();
    int getIssueDateYear();
    int getIssueDateMonth();
    int getIssueDateDay();
    int getId();
    string getGroup();
    string getFatherName();
    string getFaculty();
    int getExplorationDateYear();
    int getExperationDateMonth();
    int getExperationDateDay();
    int getEntranceYear();
};
void StudentTicket::setUniversty(string s)
{
    this.Universty = s;
}
void StudentTicket::setSurname(string s)
{
    this.Surname = s;
}
void StudentTicket::setStudyType(string s)
{
    this.StudyType = s;
}
void StudentTicket::setStructuredUnit(string s)
{
    this.StructuredUnit = s;
}
void StudentTicket::setSpecialization(string s)
{
    this.Specialization = s;
}
void StudentTicket::setRectorCredentials(string s)
{
    this.RectorCredentials = s;
}
void StudentTicket::setPart(string s)
{
    this.Part = s;
}
void StudentTicket::setName(string s)
{
    this.Name = s;
}
void StudentTicket::setIssueDateYear(int i)
{
    this.IssueDateYear = i;
}
void StudentTicket::setIssueDateMonth(int i)
{
    this.IssueDateMonth = i;
}
void StudentTicket::setIssueDateDay(int i)
{
    this.IssueDateDay = i;
}
void StudentTicket::setId(int i)
{
    this.Id = i;
}
void StudentTicket::setGroup(string s)
{
    this.Group = s;
}
void StudentTicket::setFatherName(string s)
{
    this.FatherName = s;
}
void StudentTicket::setFaculty(string s)
{
    this.Faculty = s;
}
void StudentTicket::setExplorationDateYear(int i)
{
    this.ExplorationDateYear = i;
}
void StudentTicket::setExperationDateMonth(int i)
{
    this.ExperationDateMonth = i;
}
void StudentTicket::setExperationDateDay(int i)
{
    this.ExperationDateDay = i;
}
void StudentTicket::setEntranceYear(int i)
{
    this.EntranceYear = i;
}

void TicketManager::setUnviersity(string universty)
{
    this.universty = universty;
}
string StudentTicket::getUniversty()
{
    return this.Universty;
}
string StudentTicket::getSurname()
{
    return this.Surname;
}
string StudentTicket::getStudyType()
{
    return this.StudyType;
}
string StudentTicket::getStructuredUnit()
{
    return this.StructuredUnit;
}
string StudentTicket::getSpecialization()
{
    return this.Specialization;
}
string StudentTicket::getRectorCredentials()
{
    return this.RectorCredentials;
}
string StudentTicket::getPart()
{
    return this.Part;
}
string StudentTicket::getName()
{
    return this.Name;
}
int StudentTicket::getIssueDateYear()
{
    return this.IssueDateYear;
}
int StudentTicket::getIssueDateMonth()
{
    return this.IssueDateMonth;
}
int StudentTicket::getIssueDateDay()
{
    return this.IssueDateDay;
}
int StudentTicket::getId()
{
    return this.Id;
}
string StudentTicket::getGroup()
{
    return this.Group;
}
string StudentTicket::getFatherName()
{
    return this.FatherName;
}
string StudentTicket::getFaculty()
{
    return this.Faculty;
}
int StudentTicket::getExplorationDateYear()
{
    return this.ExplorationDateYear;
}
int StudentTicket::getExperationDateMonth()
{
    return this.ExperationDateMonth;
}
int StudentTicket::getExperationDateDay()
{
    return this.ExperationDateDay;
}
int StudentTicket::getEntranceYear()
{
    return this.EntranceYear;
}

int main(int argc, char *argv[])
{
    bool badInput;
    // getPartFromCommandLine(); not defined yet
    int ID = 0; // getIdFromCommandLine(); not defined yet
    
    if (ID != 0)
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
    else // good input
    {
        // TicketManager *t = new TicketManager();

        // t->fPartSetup("test");
        // t->fIdSetup(ID);
        // bool gotTicket = t->getTicket();

        // if (gotTicket == false)
        // {
        //     delete t;
        // }
    }
    
    return 0;
}