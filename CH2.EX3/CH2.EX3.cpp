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
	double distancedTraveled, travelTime;
	int nummOfCoffeeCupSold;
	double coffeeCupCost;
	
	inFile.open("inData.txt");
	outFile.open("outData.txt");

	if (!inFile)

	{

		cout << endl << "Error opening input file inData.txt." << endl;

		system("pause");

		return -1;

	}

	inFile.close();
	outFile.close();

	system("pause");
	return 0;
}
