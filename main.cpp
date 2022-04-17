//where is get barcode???
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
    FILE *fp;
    char s[100];
    sprintf(s, "./data/%u", this.id);
    fp = freopen(s, "r", stdin);
    if (fp == NULL)
    {
        puts("Ticket not found.");
        return false;
    }
    return true;
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