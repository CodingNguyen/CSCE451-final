#include "common.h"

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