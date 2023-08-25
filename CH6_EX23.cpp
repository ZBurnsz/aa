#include <iostream>
#include <string>
using namespace std;

void countVowels(char ch, int& aCt, int& eCt, int& iCt,
int& oCt, int& uCt);

int main()
{
    string inputString;
    int aCount = 0;
    int eCount = 0;
    int iCount = 0;
    int oCount = 0;
    int uCount = 0;

    cout << "Enter a string: " << endl;
    getline(cin, inputString);

    for (int i = 0; i < inputString.length(); i++) {
        char currentChar = tolower(inputString[i]);

        if (currentChar == 'a') {
            aCount++;
        }
        else if (currentChar == 'e') {
            eCount++;
        }
        else if (currentChar == 'i') {
            iCount++;
        }
        else if (currentChar == 'o') {
            oCount++;
        }
        else if (currentChar == 'u') {
            uCount++;
        }
    }
    cout << "The number of a's: " << aCount << endl;
    cout << "The number of e's: " << eCount << endl;
    cout << "The number of i's: " << iCount << endl;
    cout << "The number of o's: " << oCount << endl;
    cout << "The number of u's: " << uCount << endl;

    system("pause");
    return 0;
}
void countVowels(char ch, int& aCt, int& eCt, int& iCt,
int& oCt, int& uCt)
{
    switch (ch)
    {
    case 'a':
    case 'A':
        aCt++;
        break;
    case 'e':
    case 'E':
        eCt++;
        break;
    case 'i':
    case 'I':
        iCt++;
        break;
    case 'o':
    case 'O':
        oCt++;
        break;
    case 'u':
    case 'U':
        uCt++;
        break;
    default:
        break;
    }
}
//Comment for commit

