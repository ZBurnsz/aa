#include <iostream>
#include <fstream>
#include <cstring>
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
cout << "Cannot open the input file. Program terminates!"<< endl;
system("pause");
return 0;

}
cout << "Processing Data" << endl;
infile.get(keyString, NO_OF_QUESTIONS+1);cout << "Key: " << keyString << endl;
infile >> ID;
infile.get(ch);
infile.get(answerString, 21);
while (infile)
{
score = 0;
for (i = 0; i < NO_OF_QUESTIONS; i++)
{
if (answerString[i] == keyString[i])
score++;
}
double percentScore = static_cast<double>(score) / NO_OF_QUESTIONS * 100.0;
char letterGrade = examGrade(percentScore);
cout << ID << " " << answerString << " " << score << " " << percentScore << "% " << letterGrade << endl;
infile >> ID;
infile.get(ch);
infile.get(answerString, 1);
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
return 'A';
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