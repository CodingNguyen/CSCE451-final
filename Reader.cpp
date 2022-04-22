#include "Reader.h"

string Reader::readStringLine()
{
    string s;
    getline(cin, s);
    return s;
}
int Reader::readIntLine()
{
    string s;
    int x;
    s = Reader::readStringLine();
    char *cstr = &s[0];//convert into cstring
    sscanf(cstr, "%d", &x);    //seems like a dangerous way to cast to an int. 
    return x;
}
long long Reader::readLongLongLine()
{
    string s;
    long long x;
    s = Reader::readStringLine();
    char *cstr = &s[0];//convert into cstring
    sscanf(cstr, "%d", &x);    //seems like a dangerous way to cast to an int. 
    return x;
}