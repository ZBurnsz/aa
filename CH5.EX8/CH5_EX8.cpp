#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int firstNum, secondNum;
    int sumEven = 0;
    int sumSquareOdd = 0;
    char chCounter;

    // part a
    cout << "Enter two numbers." << endl;
    cout << "First number must be less than the second number you enter" << endl;
    cout << "Enter numbers: ";
    cin >> firstNum >> secondNum;
    cout << endl;

    // Part b
    cout << "Odd integers between " << firstNum << " and " << secondNum << " are:" << endl;
    for (int i = firstNum; i <= secondNum; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            sumSquareOdd += i * i;
        }
    }
    cout << endl;

    // Part c
    cout << "Sum of even integers between " << firstNum << " and " << secondNum << "= ";
    for (int i = firstNum; i <= secondNum; i++)
    {
        if (i % 2 == 0)
        {
            sumEven += i;
        }
    }
    cout << sumEven << endl;

    // Part d
    cout << "1 1" << endl;
    for (int i = 2; i <= 10; i++)
    {
        cout << i << " " << i * i << endl;
    }

    // Part e
    cout << "Sum of the squares of odd integers between " << firstNum << " and " << secondNum << " = ";
    cout << sumSquareOdd << endl;

    // Part f
     cout << "Upper case letters are: ";
        chCounter = 'A';
        while (chCounter <= 'Z')
     {
         cout << chCounter << " ";
        chCounter++;
     }
        cout << endl;

system("pause");
return 0;
}
