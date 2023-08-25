#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    cout << "enter radius: ";

    double r;
    cin >> r;

    const double pi = 3.14;

    double area = pi * pow(r, 2);
    cout << "area= " << area;

    return 0;
}