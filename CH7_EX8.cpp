#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string studentInfo;
    string name, ssn, userId, password;
    string::size_type pos = 0;
    string::size_type substrLen;

    cout << "Enter a student's name, social security number, "
         << "user id, and password in one line: " << endl;
    getline(cin, studentInfo);
    cout << endl;
    
    //skip commas
    substrLen = studentInfo.find_first_of(",", pos) - pos;
    name = studentInfo.substr(pos, substrLen);
    pos += substrLen + 1; 

    substrLen = studentInfo.find_first_of(",", pos) - pos;
    ssn = studentInfo.substr(pos, substrLen);
    pos += substrLen + 1;

    substrLen = studentInfo.find_first_of(",", pos) - pos;
    userId = studentInfo.substr(pos, substrLen);
    pos += substrLen + 1;

    password = studentInfo.substr(pos);
    
    //SSN replace with X's
    ssn.replace(0, 12, "XXX-XX-XXXX");
    password.replace(0, password.length(), password.length(),'X');

    cout << name << ", " << ssn << ", " << userId << ", " << password << endl;

    system("pause");
    return 0;
}
