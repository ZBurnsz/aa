#include <iostream> 
#include <fstream> 
#include <string> 
#include <iomanip> 

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    string firstName, lastName, department;
    double grossSalary, bonus, taxRate;
    double distanceTraveled, travelTime;
    int numOfCoffeeCupsSold;
    double coffeeCupCost;

    inFile.open("inData.txt");
    outFile.open("outData.txt");
    
    if (!inFile)
    {
        cout << endl << "error opening input file inData.txt" << endl;
        system("pause");
         return -1              
    }

    outFile << fixed << showpoint << setprecision(2);

    inFile >> firstName >> lastName >> department;
    outFile << "Name: " << firstName << " " << lastName
        << ", Department: " << department << endl;

    inFile >> grossSalary >> bonus >> taxRate;
    outFile << "Monthly Gross Salary: $" << grossSalary
        << ", Monthly Bonus: " << bonus << "%, Taxes: "
        << taxRate << "%" << endl;

    outFile << "Paycheck: $"
        << grossSalary * (1 + bonus / 100) * (1 - taxRate / 100)
        << endl << endl;

    inFile >> distanceTraveled >> travelTime;
    outFile << "Distance Traveled: " << distanceTraveled
        << " miles, Traveling Time: " << travelTime << " hours" << endl;
    outFile << "Average Speed: " << distanceTraveled / travelTime
        << " miles per hour" << endl << endl;

    inFile >> numOfCoffeeCupsSold >> coffeeCupCost;
    outFile << "Number of Coffee Cups Sold: " << numOfCoffeeCupsSold
        << ", Cost: $" << coffeeCupCost << " per cup" << endl;
    outFile << "Sales Amount = $" << numOfCoffeeCupsSold * coffeeCupCost
        << endl;

    inFile.close();
    outFile.close();
    return 0;
}