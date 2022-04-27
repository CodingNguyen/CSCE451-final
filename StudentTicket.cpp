#include "StudentTicket.h"

StudentTicket::StudentTicket() // not complete
{
    this->University = "Donetsk National University";
    this->Id = 16487351;
    this->EntranceYear = 2009;
    this->IssueDateYear = 2009;
    this->IssueDateMonth = 9;
    this->IssueDateDay = 1;
    this->ExperationDateYear= 2013;
    this->ExperationDateMonth= 6;
    this->ExperationDateDay=30;
    this->Name = "Vasiliy";
    this->Surname ="Petrovich"; 
    //this->StudyType =
    //this->StructuredUnit =
    this->Specialization = "Physics";
    //this->RectorCredentials =
    //this->Part =
    //this->Group =
    this->FatherName ="Shevchenko V. P.";
    //this->Faculty =
    // "CA"
    // "Pumpkin"
    // ""
    // "Day"
    // "IDSS"
    // "A"
    // 0
    // 0
    // 0
}
void StudentTicket::setUniversity(string s)
{
    this->University = s;
}

void StudentTicket::setSurname(string s)
{
    this->Surname = s;
}

void StudentTicket::setStudyType(string s)
{
    this->StudyType = s;
}

void StudentTicket::setStructuredUnit(string s)
{
    this->StructuredUnit = s;
}

void StudentTicket::setSpecialization(string s)
{
    this->Specialization = s;
}

void StudentTicket::setRectorCredentials(string s)
{
    this->RectorCredentials = s;
}

void StudentTicket::setPart(string s)
{
    this->Part = s;
}

void StudentTicket::setName(string s)
{
    this->Name = s;
}

void StudentTicket::setIssueDateYear(int i)
{
    this->IssueDateYear = i;
}

void StudentTicket::setIssueDateMonth(int i)
{
    this->IssueDateMonth = i;
}

void StudentTicket::setIssueDateDay(int i)
{
    this->IssueDateDay = i;
}

void StudentTicket::setId(int i)
{
    this->Id = i;
}

void StudentTicket::setGroup(string s)
{
    this->Group = s;
}

void StudentTicket::setFatherName(string s)
{
    this->FatherName = s;
}

void StudentTicket::setFaculty(string s)
{
    this->Faculty = s;
}

void StudentTicket::setExperationDateYear(int i)
{
    this->ExperationDateYear = i;
}

void StudentTicket::setExperationDateMonth(int i)
{
    this->ExperationDateMonth = i;
}

void StudentTicket::setExperationDateDay(int i)
{
    this->ExperationDateDay = i;
}

void StudentTicket::setEntranceYear(int i)
{
    this->EntranceYear = i;
}

string StudentTicket::getUniversity()
{
    return this->University;
}

string StudentTicket::getSurname()
{
    return this->Surname;
}

string StudentTicket::getStudyType()
{
    return this->StudyType;
}

string StudentTicket::getStructuredUnit()
{
    return this->StructuredUnit;
}

string StudentTicket::getSpecialization()
{
    return this->Specialization;
}

string StudentTicket::getRectorCredentials()
{
    return this->RectorCredentials;
}

string StudentTicket::getPart()
{
    return this->Part;
}

string StudentTicket::getName()
{
    return this->Name;
}

int StudentTicket::getIssueDateYear()
{
    return this->IssueDateYear;
}

int StudentTicket::getIssueDateMonth()
{
    return this->IssueDateMonth;
}

int StudentTicket::getIssueDateDay()
{
    return this->IssueDateDay;
}

int StudentTicket::getId()
{
    return this->Id;
}

string StudentTicket::getGroup()
{
    return this->Group;
}

string StudentTicket::getFatherName()
{
    return this->FatherName;
}

string StudentTicket::getFaculty()
{
    return this->Faculty;
}

int StudentTicket::getExperationDateYear()
{
    return this->ExperationDateYear;
}

int StudentTicket::getExperationDateMonth()
{
    return this->ExperationDateMonth;
}

int StudentTicket::getExperationDateDay()
{
    return this->ExperationDateDay;
}

int StudentTicket::getEntranceYear()
{
    return this->EntranceYear;
}
