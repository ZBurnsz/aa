#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip> 

using namespace std;

const int NO_OF_QUESTIONS = 20;

char examGrade(int score);
int main()
{
    char keyString[NO_OF_QUESTIONS + 1];
    char answerString[NO_OF_QUESTIONS + 1];
    char ID[9];
    char ch;
    int score;
    int len;


    ifstream infile;
    int i;

    infile.open("Ch8_Ex6Data.txt");

    if (!infile)
    {
        cout << "Cannot open the input file. Program terminates!" << endl;
        system("pause");
        return 1;
    }

    cout << "Processing Data" << endl;

    infile.get(keyString, 21);
    cout << "Key: " << keyString << endl;

    while (infile >> ID)
    {
        infile.get(ch);
        infile.get(answerString, 21);

        score = 0;
        len = strlen(answerString);

        cout << ID << " " << answerString << " ";

        for (i = 0; i < NO_OF_QUESTIONS; i++)
        {
            if (answerString[i] != ' ' && answerString[i] != '\0')
            {
                if (answerString[i] == keyString[i])
                {
                    score += 2;
                }
                else
                {
                    score--;
                }
            }
        }

        cout << setw(2) << score << " " << examGrade(score) << endl;
    }

    cout << endl;
    infile.close();
    system("pause");
    return 0;
}

char examGrade(int score)
{
    switch (static_cast<int>(score / 40.0 * 10))
    {
    case 10:
    case 9:
        return 'A';
    case 8:
        return 'B';
    case 7:
        return 'C';
    case 6:
        return 'D';
    default:
        return 'F';
    }
}
